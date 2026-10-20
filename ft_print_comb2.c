/* ************************************************************************** */
/*                                                                            */
/*                                                    _  ___  _   _ __  __    */
/*   ft_print_comb2.c                                | ||_ _|| \ | |\ \/ /    */
/*                                                 _ | | | | |  \| | >  <     */
/*   By: jinx <jinx@fishbone>                     |____||___||_|\__|/_/\_\    */
/*                                               ~~~~~~~~~~~~~~~~~~~~~~~~~    */
/*   Created: 2026/10/20 23:08:35 by jinx               * ~ PowPow!! ~ *      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	d;
	char	i;
	char	l;
	char	m;

	d = 48;
	while (d <= 57)
	{
		i = 48;
		while (i <= 56)
		{
			l = 48;
			while (l <= 57)
			{
				m = 49;
				while (m <= 57)
				{
					write(1, &d, 1);
					write(1, &i, 1);
					write(1, " ", 1);
					write(1, &l, 1);
					write(1, &m, 1);
					if (!(d == 57 && i == 56 && l == 57 && m == 57))
						write(1, ", ", 2);
					m++;
				}
				l++;
			}
			i++;
		}
		d++;
	}
}

int	main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
}
