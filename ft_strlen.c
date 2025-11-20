/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/03 17:24:04 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/18 18:48:52 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

//int main(void)
//{
//	printf("%zu\n", ft_strlen(""));
//	printf("%zu\n", ft_strlen("m"));
//	printf("%zu\n", ft_strlen("me"));
//	printf("%zu\n", ft_strlen("meo"));
//	printf("%zu\n", ft_strlen("meow"));
//	printf("%zu\n", ft_strlen("meowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeow"));
//}