#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	int	i;
	int	j;

	if (!*find)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == find[j]) && str[i + j])
		{
			if (!find[j + 1])
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (NULL);
}
