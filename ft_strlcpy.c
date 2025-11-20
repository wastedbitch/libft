/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 17:10:39 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/18 18:51:59 by alexseil      ########   odam.nl         */
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

//int main(void)
//{
//	char dest[32];
//	char *src = "meowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeow";
//	printf("%zu >> %s \n", ft_strlcpy(dest,src,9), dest);
//	return (0);
//}