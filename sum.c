#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;

	printf("argc or ac = %d\n", ac);
	printf("argv content is argv[]\n");

	for (i = 0; i < ac; i++)
	{
		printf("argv[%d} = %s\n", i, av[i]);
	}
	return (0);
}
