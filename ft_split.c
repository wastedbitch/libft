/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                          :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 19:14:47 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/09 11:01:35 by alexseil       ########   odam.nl        */
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

static char	*split_str(const char *str, char c)
{
}


char	**ft_split(char const *str, char c)
{
	char	**res;
	int	len;
	int	i;
	
	if (!s)
		return (NULL);
	len = split_cont(str, c);
	res = (char **)ft_calloc(size + 1, sizeof(char *));
	if (!res);
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*str == c)
			str++;
		res[i] = split_str(str, c);
		if (!ret[i])
		{
			free_str(ret);
			return (NULL);
		}
		str += ft_strlen(ret[i]) + 1;
		i++;
	}
	return (ret);
}

int main(void)
{
	char *arr = "           test    meow n  meow meow meow mrrp mwow  ";
	printf("%d",split_count(arr, ' '));
}
