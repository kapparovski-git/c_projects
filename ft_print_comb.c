/* ************************************************************************** */
/*                                                                            */
/*                                                    _  ___  _   _ __  __    */
/*   ft_print_comb.c                                 | ||_ _|| \ | |\ \/ /    */
/*                                                 _ | | | | |  \| | >  <     */
/*   By: jinx <jinx@fishbone>                     |____||___||_|\__|/_/\_\    */
/*                                               ~~~~~~~~~~~~~~~~~~~~~~~~~    */
/*   Created: 2026/10/20 22:35:45 by jinx               * ~ PowPow!! ~ *      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	d;
	char	l;

	i = 48;
	while (i <= 55)
	{
		d = i + 1;
		while (d <= 56)
		{
			l = d + 1;
			while (l <= 57)
			{
				write(1, &i, 1);
				write(1, &d, 1);
				write(1, &l, 1);
				if (i != 55)
					write(1, ", ", 2);
				l++;
			}
			d++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
} 
