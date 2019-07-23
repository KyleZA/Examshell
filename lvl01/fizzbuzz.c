#include <unistd.h>

int main (int c)
{
	int i;

	i = 0;

	while (i <= 100)
	{
		if (i == (c * 3))
			write (1, "fizz", 5);
	}

}
