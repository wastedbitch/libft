/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 17:56:25 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/27 14:08:30 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	if (dlen >= n)
		return (slen + n);
	if (n > 0)
	{
		while (src[i] && i + dlen < n - 1)
		{
			dest[i + dlen] = src[i];
			i++;
		}
		dest[i + dlen] = 0;
	}
	return (slen + dlen);
}
