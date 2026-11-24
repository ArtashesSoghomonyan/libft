#include "libft.h"

char	*strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
