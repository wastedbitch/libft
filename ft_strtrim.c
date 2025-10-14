/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                        :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 15:17:02 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/14 18:30:03 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	start = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (ft_char_set(s1[start], set))
		start++;
	while (ft_char_set(s1[end], set))
		end--;
	res = (char *)malloc(sizeof(*s1) + (end - start +1));
	if (!res)
		return (NULL);
	while (start + i <= end)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
