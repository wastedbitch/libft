/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                          :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 19:14:47 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/11 21:37:29 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	split_count(char const *str, char c)
{
	int	i;
	int	count;
	int	segment;

	i = 0;
	segment = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (!segment)
			{
				count++;
				segment = 1;
			}
		}
		else
			segment = 0;
		i++;
	}
	return (count);
}

static char	*split_str(const char *str, char c, int i)
{
	int	x;

	x = 0;
	while (str[i + x] != c && str[i + x])
		x++;
	return (ft_substr(str, i, x));
}

static char	**free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**res;
	int		len;
	int		a;
	int		i;

	if (!str)
		return (NULL);
	len = split_count(str, c);
	res = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!res)
		return (NULL);
	a = 0;
	i = 0;
	while (a < len)
	{
		while (str[i] == c)
			i++;
		res[a] = split_str(str, c, i);
		if (!res[a])
			return (free_array(res));
		i += ft_strlen(res[a]) + 1;
		a++;
	}
	return (res);
}
