#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*result;

	if ((result = ft_strnew(ft_strlen(s1))))
	{
		i = 0;
		while (s1[i])
		{
			result[i] = s1[i];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}
