/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:54:02 by yupeng            #+#    #+#             */
/*   Updated: 2023/02/08 22:57:48 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start > i)
		return (ft_strdup(""));
	if (start + len > i)
		len = i - start;
	size = len + 1;
	dst = (char *)malloc(sizeof(char) * size);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s + start, len);
	dst[len] = '\0';
	return (dst);
}
// int main()
// {
// 	const char *s = "abcde";
// 	unsigned int i = 3;
// 	size_t len = 3;
// 	printf("%p\n",ft_substr(s,i,len));
// }
// This implementation starts by checking if the input string 
// s is NULL. If it is, the function returns NULL. 
// Then it checks if the start index is greater than or
//  equal to the length of the input string. 
// If it is, the function returns an empty string "". 
// If both of these checks pass, the function uses malloc
//  to allocate memory for the new substring. 
// If the allocation fails, the function returns NULL. 
// Finally, the function copies len characters from the 
// input string starting at index start 
// into the newly allocated memory and adds 
// a null terminator '\0' to the end of the substring.