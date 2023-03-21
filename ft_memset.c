/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:12:17 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/28 17:44:24 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*a;

	a = (char *)b;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

// int main()
// {
// 	char a[50];
// 	void *b = a[20];
// 	int c = 1;
// 	size_t len = 10;

//     printf("%p\n", *ft_memset(*b,c,len));
// 	printf("%p\n",*memset(*b,c,len));
// }
//!why <len not <=len
//? because it is 0 starting?