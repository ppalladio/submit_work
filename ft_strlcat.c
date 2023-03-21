/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:19:42 by yupeng            #+#    #+#             */
/*   Updated: 2023/02/08 22:19:42 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	res;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	res = 0;
	if (!size)
		return (slen);
	if (size > dlen)
		res = dlen + slen;
	else
		res = size + slen;
	while (dlen + i < size - 1 && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (res);
}

// int main()
// {
// 	char dst[] = "1223";
// 	char src[] = "ab2344";
// 	int r = 2;
// 	printf("%lu\n", ft_strlcat(dst, src, r));
// 	// printf("%s\n", dst);
// 	// char d[] = "12";
// 	// char s[] = "ab";
// 	// printf("%u\n", strlcat(d,s,r));
// 	// printf("%s\n", d);

// 	return (0);
// }

// // This is a poten
// // Value returned: 33
// // String truncated

// // // If you modify Line 9 to change the
//  size variable (and buffer size) to 64, the buffer is now large enough to 
//  accommodate the concatenated strings. Here’s the updated output:

// // This is a potentially long string
// // Value returned: 33
// // String was fully copied
