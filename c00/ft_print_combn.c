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
	
}




int	main(void)
{
	ft_print_combn(1);
	ft_putchar('\n');
	return (0);
}
