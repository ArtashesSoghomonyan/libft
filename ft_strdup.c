#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	int		i;
	int		l;

	l = ft_strlen(str);
	res = malloc(l + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < l)
	{
		res[i] = str[i];
		++i;
	}
	res[i] = '\0';
	return (res);
}
