#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int n;

	n = '1';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
	ft_putchar('\n');
}