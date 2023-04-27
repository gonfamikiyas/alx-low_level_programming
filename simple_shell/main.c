#include "shell.h"

/**
 * main - Entry point of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT }; /* initialize info_t structure */
	int fd = STDERR_FILENO;

	/* Set fd to STDERR_FILENO + 3 */
	asm("mov %1, %0\n\t"
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));

	/* If an argument is given, open it as a file */
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			/* Handle errors while opening the file */
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_eputs(av[0]);
				_eputs(": 0: Can't open ");
				_eputs(av[1]);
				_eputchar('\n');
				_eputchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}

	populate_env_list(info); /* Populate the environment list */
	read_history(info); /* Read the history from the file */
	hsh(info, av); /* Start the shell */
	return (EXIT_SUCCESS);
}

