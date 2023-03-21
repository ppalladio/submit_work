/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:54:06 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/31 12:00:15 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// simplistic algorithm with O(n2) worst case

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

// int main()
// {
// 	char *str;
// 	char *str1 = "y";
// 	size_t len = 10;
// 	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30)))
//         ft_print_result("NULL");
//     else
//         ft_print_result(str);
// 	printf("%s\n", ft_strnstr(str, str1, len));
// 	printf("%s\n", strnstr(str, str1, len));
// 	return (0);
// }