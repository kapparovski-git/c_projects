/* ************************************************************************** */
/*                                                                            */
/*                                                    _  ___  _   _ __  __    */
/*   ft_putnbr.c                                     | ||_ _|| \ | |\ \/ /    */
/*                                                 _ | | | | |  \| | >  <     */
/*   By: jinx <jinx@fishbone>                     |____||___||_|\__|/_/\_\    */
/*                                               ~~~~~~~~~~~~~~~~~~~~~~~~~    */
/*   Created: 2026/10/20 23:37:31 by jinx               * ~ PowPow!! ~ *      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
}

int	main(void)
{
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(2147483646);
	ft_putchar('\n');
	return (0);
}
