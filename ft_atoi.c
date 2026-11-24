#include "libft.h"

size_t	ft_atoi(const char *str)
{
	size_t	res;
	size_t	i;
	size_t	is_neg;

	res = 0;
	i = 0;
	is_neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * is_neg);
}
