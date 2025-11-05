/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                          :+:    :+:           */
/*                                                     +:+                    */
/*   By: alexseil <alexseil@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 19:14:47 by alexseil      #+#    #+#                 */
/*   Updated: 2025/11/05 18:35:40 by alexseil       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int split_count(char const *str, char c)
{
	int i;
	int count;
	int segment;

	i = 0;
	segment = 0;
	count = 0;

	while (str[i])
	{
		if (str[i] != c)
		{
			if (!segment)
			{
				count++;
				segment = 1;
			}
		}
		else
			segment = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	return(NULL);
}

int main(void)
{
	char *arr = "           test    meow n  meow meow meow mrrp mwow  ";
	printf("%d",split_count(arr, ' '));
}
