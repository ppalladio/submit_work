/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:41:11 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/26 13:58:57 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
			len++;
	return (len);
}

// int main(void)
// {
// 	char *c;

// 	c = "ddas";
// 	printf("%d\n", ft_strlen(c));
// 	printf("%d\n", strlen(c));
// }

// int main()
// {
//     char a[20]="Program";
//     char b[20]={'P','r','o','g','r','a','m','\0'};
//     printf("Length of string b = %zu \n",strlen(b));

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",strlen(a));

//     return 0;
// }