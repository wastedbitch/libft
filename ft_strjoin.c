/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 18:27:13 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/10 18:49:42 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	size_t	l1;
	size_t	l2;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(*s1) * (l1 + l2 + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, l1 + 1);
	ft_strlcpy(&res[l1], s2, l2 + 1);
	return (res);
}
