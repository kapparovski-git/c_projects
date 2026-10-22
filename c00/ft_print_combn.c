/* ************************************************************************** */
/*                                                                            */
/*                                                    _  ___  _   _ __  __    */
/*   ft_print_combn.c                                | ||_ _|| \ | |\ \/ /    */
/*                                                 _ | | | | |  \| | >  <     */
/*   By: jinx <jinx@fishbone>                     |____||___||_|\__|/_/\_\    */
/*                                               ~~~~~~~~~~~~~~~~~~~~~~~~~    */
/*   Created: 2026/10/21 19:08:29 by jinx               * ~ PowPow!! ~ *      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	comb[10];
	int	i;

	if (n <= 0 || n >= 10)
		return;
	i = 0;
	while (i < n)
	{
		comb[i] = '0' + i;
		i++;
	}
		while (1)
		{
			write(1, comb, n);
			if (comb[0] == '0' + (10 - n))
				return ;
			write(1, ", ", 2);
			i = n - 1;
			while (comb[i] == '0' + (10 - n + i))
				i--;
			comb[i]++;
			while (i < n - 1)
			{
				comb[i + 1] = comb[i] + 1;
				i++;
			}
		}
}


int	main(void)
{
	ft_print_combn(1);
	ft_putchar('\n');
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(3);
	ft_putchar('\n');
	ft_print_combn(9);
	ft_putchar('\n');
	return (0);
}
