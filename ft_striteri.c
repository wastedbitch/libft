/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                       :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 17:14:37 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/20 18:15:44 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

//char meow_func(unsigned int i, char str)
//{
//	str[i] -= 32;
//}
//
//int main(void)
//{
//	char *str = "meow";
//	ft_striteri(str, meow_func);
//	printf("%s \n", str);
//	return (0);
//}
