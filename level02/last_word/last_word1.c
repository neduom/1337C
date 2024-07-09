#include <unistd.h>

void	is_lastword(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			j = i++;
		i++;
	}
	while (str[j])
	{
		if (!(str[j] == ' ' || str[j] == '\t' || str[j] == '\n'))
		{
			write(1, &str[j], 1);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	is_lastword(argv[1]);
}
