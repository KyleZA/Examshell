#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;

	if(argc >= 1)
	{
		while(**argv != '\0')
		{
		write(1, &argv[i - 1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
