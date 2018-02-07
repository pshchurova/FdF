#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = ft_strlen(s1);
	while (n-- && (s1[i] = *s2++))
		i++;
	s1[i] = '\0';
	return (s1);
}
