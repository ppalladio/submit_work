/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:12:45 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/31 17:18:49 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (i < (size - 1) && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// void test(int size)
// {
// 	char string[] = "Hello there, Venus";
// 	char buffer[19];
// 	int r;

// 	r = ft_strlcpy(buffer, string, size);

// 	printf("Copied '%s' into '%s', length %d\n",
// 		   string,
// 		   buffer,
// 		   r);
// }

// int main()
// {
// 	test(19);
// 	test(10);
// 	test(1);
// 	test(0);

// 	return (0);
// }