/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 20:38:18 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/12 18:32:44 by alexseil      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	pn;

	i = 0;
	pn = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		pn = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		i = i * 10 + *str++ - 48;
	return (i * pn);
}

//int main(void)
//{
//	printf("0 : %d\n", ft_atoi("0"));
//	printf("1312 : %d\n", ft_atoi("1312"));
//	printf("-1312 : %d\n", ft_atoi("-1312"));
//	printf("2147483647 : %d\n", ft_atoi("2147483647"));
//	printf("-2147483648: %d\n", ft_atoi("-2147483648"));
//	printf("2147483648: %d\n", ft_atoi("2147483648"));
//	printf("-2147483649: %d\n", ft_atoi("-2147483649"));
//	printf("1312   : %d\n", ft_atoi("1312   "));
//	printf("   1312: %d\n", ft_atoi("   1312"));
//	printf("meow : %d\n", ft_atoi("meow"));
//}