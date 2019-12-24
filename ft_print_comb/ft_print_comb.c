#include "unistd.h"

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = '0';
	while (x <= '9')
	{
		y = '1';
		while (y <= '8')
		{
			z = '2';
			while (z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				ft_putchar(',');
				ft_putchar(' ');
				z++;
			}
			y++;
		}
		x++;
	}
	ft_putchar('\n');
}

int 	main(void)
{
	ft_print_comb();	
}