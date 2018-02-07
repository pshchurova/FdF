#include "libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	if (s)
		write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}
