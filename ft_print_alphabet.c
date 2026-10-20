/* ************************************************************************** */
/*									      */
/*						      _  ___  _   _ __  __    */
/*   ft_print_alphabet.c                             | ||_ _|| \ | |\ \/ /    */
/*						   _ | | | | |  \| | >  <     */
/*   By: jinx <jinx@fishbone>                     |____||___||_|\__|/_/\_\    */
/*					         ~~~~~~~~~~~~~~~~~~~~~~~~~    */
/*   Created: 2026/10/20 16:30:57 by jinx               * ~ PowPow!! ~ *      */
/*									      */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c <= 122)
	{
		if (!(c >= 97 && c<= 122))
			return ;
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
