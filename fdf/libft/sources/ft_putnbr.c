#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned num;

	if (n < 0)
		ft_putchar('-');
	num = (unsigned)FT_ABS(n);
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}
