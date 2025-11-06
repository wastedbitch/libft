/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 17:09:28 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/06 17:09:29 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = ft_strlen(s);
	dup = (char *)malloc(i * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, i + 1);
	return (dup);
}
