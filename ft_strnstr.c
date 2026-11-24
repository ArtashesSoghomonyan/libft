#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	int	i;
	int	j;

	if (!*find)
		return (str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while ((str[i + j] == find[j]) && i + j < n)
		{
			if (!find[j + 1])
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (NULL);
}
