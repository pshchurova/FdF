#include "libft.h"

char	*ft_strupr(char *s)
{
	size_t i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = ft_toupper(s[i]);
			i++;
		}
	}
	return (s);
}
