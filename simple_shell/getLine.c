#include "shell.h"

/**
 * input_buf - buffers chained commands
 * @info: struct containing parameter info
 * @buf: address of buffer
 * @len: address of len var
 *
 * Return: bytes read
 */
ssize_t input_buf(info_t *info, char **buf, size_t *len)
{
	ssize_t r = 0;
	size_t len_p = 0;

	if (!*len) /* if nothing left in the buffer, fill it */
	{
		/*bfree((void **)info->cmd_buf);*/
		free(*buf);
		*buf = NULL;
		signal(SIGINT, sigint_handler);
#if USE_GETLINE
		r = getline(buf, &len_p, stdin);
#else
		r = _getline(info, buf, &len_p);
#endif
		if (r > 0)
		{
			if ((*buf)[r - 1] == '\n')
			{
				(*buf)[r - 1] = '\0'; /* remove trailing newline */
				r--;
			}
			info->linecount_flag = 1;
			remove_comments(*buf);
			build_history_list(info, *buf, info->histcount++);
			/* if (_strchr(*buf, ';')) is this a command chain? */
			if (_strchr(*buf, ';'))
			{
				*len = r;
				info->cmd_buf = buf;
			}
		}
	}
	return (r);
}

/**
 * get_input - gets a line minus the newline
 * @info: struct containing parameter info
 *
 * Return: bytes read
 */
ssize_t get_input(info_t *info)
{
	static char *buf; /* the ';' command chain buffer */
	static size_t i, j, len;
	ssize_t r = 0;
	char **buf_p = &(info->arg), *p;

	_putchar(BUF_FLUSH);
	r = input_buf(info, &buf, &len);
	if (r == -1) /* EOF */
		return (-1);
	if (len) /* we have commands left in the chain buffer */
	{
		j = i; /* init new iterator to current buf position */
		p = buf + i; /* get pointer for return */

		check_chain(info, buf, &j, i, len);
		while (j < len) /* iterate to semicolon or end */
		{
			if (is_chain(info, buf, &j))
				break;
			j++;
		}

		i = j + 1; /* increment past nulled ';'' */
		if (i >= len) /* reached end of buffer? */
		{
			i = len = 0; /* reset position and length */
			info->cmd_buf_type = CMD_NORM;
		}

		*buf_p = p; /* pass back pointer to current command position */
		return (_strlen(p)); /* return length of current command */
	}

	*buf_p = buf; /* else not a chain, pass back buffer from _getline() */
	return (r); /* return length of buffer from _getline() */
}

/**
 * read_buf - reads a buffer
 * @info: struct containing parameter info
 * @buf: buffer
 * @i: size
 * Return: r
 */
ssize_t read_buf(info_t *info, char *buf, size_t *i)
{
	ssize_t r = 0;

	if (*i)
		return (0);
	r = read(info->readfd, buf, READ_BUF_SIZE);
	if (r >= 0)
		*i = r;
	return (r);
}

/**
 * _getline - reads a line of input from STDIN
 * @info: a pointer to the parameter struct
 * @ptr: a pointer to the buffer, which can be preallocated or NULL
 * @length: a pointer to the size of the preallocated buffer, if not NULL
 * Return: the number of bytes read
 */
int _getline(info_t *info, char **ptr, size_t *length)
{
	static char buffer[READ_BUF_SIZE];
	static size_t buffer_index, buffer_size;
	size_t line_length;
	ssize_t bytes_read = 0, total_bytes_read = 0;
	char *line = NULL, *new_line = NULL, *end_of_line;

	line = *ptr;
	if (line && length)
		line_length = *length;
	if (buffer_index == buffer_size)
		buffer_index = buffer_size = 0;
	bytes_read = read_buffer(info, buffer, &buffer_size);
	if (bytes_read == -1 || (bytes_read == 0 && buffer_size == 0))
		return (-1);
	end_of_line = _strchr(buffer + buffer_index, '\n');
	line_length = end_of_line ? 1 + (unsigned int)(end_of_line - buffer) : buffer_size;
	new_line = _realloc(line, line_length, line_length ? line_length + line_length : line_length + 1);
	if (!new_line) /* MALLOC FAILURE! */
		return (line ? free(line), -1 : -1);
	if (line_length)
		_strncat(new_line, buffer + buffer_index, line_length - buffer_index);
	else
		_strncpy(new_line, buffer + buffer_index, line_length - buffer_index + 1);
	total_bytes_read += line_length - buffer_index;
	buffer_index = line_length;
	line = new_line;
	if (length)
		*length = line_length;
	*ptr = line;
	return (total_bytes_read);
}

/**
 * sigintHandler - blocks ctrl-C
 * @sig_num: the signal number
 * Return: void
 */
void sigintHandler(__attribute__((unused))int sig_num)
{
	_puts("\n");
	_puts("$ ");
	_putchar(BUF_FLUSH);
}

