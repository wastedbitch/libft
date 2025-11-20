/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                        :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 20:02:26 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/20 19:01:59 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	int	dom;

	if (*sub == '\0')
		return ((char *)str);
	while (len > 0 && *str)
	{
		dom = 0;
		while (len + 1 - dom > 0 && (*(str + dom) == sub[dom] || !sub[dom]))
		{
			if (!sub[dom])
				return ((char *)str);
			dom++;
		}
		str++;
		len--;
	}
	return (NULL);
}

//int main(void)
//{
//	char *str = "i am a fish meow blub meow meow";
//	char *sub = "meow";
//	printf("%s\n", ft_strnstr(str,sub,31));
//	printf("%s\n", ft_strnstr(str,sub,12));
//	printf("%s\n", ft_strnstr(str,sub,0));
//	return (0);
//}
