/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 17:59:39 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/10 18:26:07 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*(s + 1))
		s++;
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			s--;
	}
	return (NULL);
}

//char	*ft_strrchr(const char *s, int c)
//{
//	int		i;
//	int		len;

//	i = -1;
//	len = ft_strlen(s);
//	while (len - ++i >= 0)
//		if (s[len - i] == (char)c)
//			return ((char *)s + len - i);
//	return (NULL);
//}