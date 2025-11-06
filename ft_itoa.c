/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 17:15:15 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/06 17:23:51 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fish(int isn, int n, size_t len)
{
	size_t	i;
	char	*str;

	i = len - 1;
	str = malloc((len + isn + 1 * sizeof(char)));
	if (!str)
		return (NULL);
	if (isn)
		str[0] = '-';
	while (n > 0)
	{
		str[i + isn] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	str[len + isn] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		isn;
	size_t	len;
	int		tmp;

	len = 0;
	isn = 0;
	tmp = n;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		len++;
	}
	if (n == 2147483647)
		return (ft_strdup("2147483647\0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	if (n == 0)
		return (ft_strdup("0\0"));
	if (n < 0)
	{
		isn = 1;
		n = -n;
	}
	return (fish(isn, n, len));
}
