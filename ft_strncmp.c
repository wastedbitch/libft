/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 18:57:37 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/20 18:16:16 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i && s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if (n > i)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

//int main(void)
//{
//	printf("\"a\",\"a\", 1 = %d \n", ft_strncmp("a","a", 1));
//	printf("\"az\",\"aa\", 1 = %d \n", ft_strncmp("az","aa", 1));
//	printf("\"aaz\",\"aaa\", 3 = %d \n", ft_strncmp("aaz","aaa", 3));
//	printf("\"b\",\"a\", 1 = %d \n", ft_strncmp("b","a", 1));
//	printf("\"a\",\"b\", 1 = %d \n", ft_strncmp("a","b", 1));
//	printf("\"1\",\"2\", 1 = %d \n", ft_strncmp("1","2", 1));
//	printf("\"a\",\" \", 1= %d \n", ft_strncmp("a"," ", 1));
//	printf("\"\",\"\", 1 = %d \n", ft_strncmp("","", 1));
//	printf("\"MEOW\",meow\", 4 = %d \n", ft_strncmp("MEOW","meow", 4));
//	return (0);
//}
