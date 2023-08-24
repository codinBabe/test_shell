#include "shell.h"
/**
 */
int _env(Node *e)
{
	int i = 0;

	while (e->env_var[i])
	{
		int j = 0;

		while (e->env_var[i][j])
		{
			write(STDOUT_FILENO, &e-env_var[i][j], 1);
			j++;
		}
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	e->data = 0;
	return (1);
}
/**
 */
void _env_help(char *input, Node *e)
{
	free(input);
	_env(e);
}
