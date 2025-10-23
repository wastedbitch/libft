/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 17:56:25 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/23 15:34:39 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dest);
	i = 0;
	if (n > 0)
	{	
		if (n <= len)
			return (n + len);
		while (src[i] && i + len < n - 1)
		{
			dest[i + len] = src[i];
			i++;
		}
		dest[i + len] = 0;
		return (ft_strlen(src) + i);
	}
	return (ft_strlen(src));
}
