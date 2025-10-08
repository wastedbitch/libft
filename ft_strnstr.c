/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 20:02:26 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/08 18:26:11 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	int	dom;

	while (len > 0 && *str)
	{
		dom = 0;
		while (len + 1 - dom > 0 && (*(str + dom) == sub[dom] || !sub[dom]))
		{
			printf("%c\n", *(str + dom));
			if (!sub[dom])
				return ((char *)str);
			dom++;
		}
		str++;
		len--;
	}
	return (NULL);
}
