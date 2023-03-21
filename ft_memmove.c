/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:10:26 by yupeng            #+#    #+#             */
/*   Updated: 2023/02/08 22:10:26 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!ptr && !ptr2)
		return (NULL);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}

// int main()
// {
// 	char dest[] = "oldng";
// 	const char src[] = "neffwinga";
// 	char des[] = "oldng";
// 	const char sr[] = "neffwinga";
// 	size_t i = 6;
// 	printf("Before memmove dest = %s, src = %s\n", dest, src);
// 	printf("address of ft_memmove%p\t\n", memmove(dest, src, i));
// 	printf("After ft_memmove dest = %s, src = %s\n", dest, src);
// 	printf("Before memmove des = %s, sr = %s\n", des, sr);
// 	printf("address of memmove%p\t\n", memmove(des, sr, i));
// 	printf("After memmove des = %s, sr = %s\n", des, sr);

// 	return (0);
// }