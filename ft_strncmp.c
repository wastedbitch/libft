/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 18:57:37 by alexseil      #+#    #+#                 */
/*   Updated: 2025/10/08 18:23:55 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			n--;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}
