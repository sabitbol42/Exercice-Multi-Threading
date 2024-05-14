#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	init_crowd(int *crowd);
void	count_croad(int *crowd, int *a, int *b, int *c);

int	main(void)
{
	int	crowd[100000];
	int	a; //0
	int	b; //1
	int	c; //2

	a = 0;
	b = 0;
	c = 0;
	init_crowd(crowd);
	count_croad(crowd, &a, &b, &c);
	printf("Number of a : %d\n", a);
	printf("Number of b : %d\n", b);
	printf("Number of c : %d\n", c);
}

void	init_crowd(int *crowd)
{
	int	i;

	i = 0;
	while (i < 100000)
	{
		crowd[i] = rand() % 3;
		i++;
	}
}

void	count_croad(int *crowd, int *a, int *b, int *c)
{
	int	i;

	i = 0;
	while (i < 100000)
	{
		if (crowd[i] == 0)
			(*a)++;
		else if (crowd[i] == 1)
			(*b)++;
		else if (crowd[i] == 2)
			(*c)++;
		i++;
	}
}
