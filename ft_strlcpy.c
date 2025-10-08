/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 17:10:39 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/08 18:23:29 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
