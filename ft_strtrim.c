/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                        :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 15:17:02 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/03 17:37:29 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_char_set(char c, char const *set)
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
	size_t i;

	while (ft_char_set(s1[i], set))
	{
		i++;
	}
	printf("%d meow\n", i);
	return(*s1);
}

