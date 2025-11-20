/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 17:13:37 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/18 18:34:38 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

//char meow_func(unsigned int i, char str)
//{
//	return (str - 32);
//}

//int main(void)
//{
//	char *str = "meow";
//	char *res = ft_strmapi(str, meow_func);
//	printf("%s >> %s \n", str, res);
//	return (0);
//}
