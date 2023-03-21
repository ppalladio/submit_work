/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:09:32 by marvin            #+#    #+#             */
/*   Updated: 2023/01/31 18:48:11 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	char *s = "abc";
// 	int c = 99;
// 	printf("%p\n", ft_strrchr(s, c));
// 	printf("%p\n", strrchr(s, c));
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define SIZE 40

// int main(void)
// {
//   char buf[SIZE] = "computer program";
//   char * ptr;
//   int    ch = 'p';

//   /* This illustrates strchr */
//   ptr = strchr( buf, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );

//   /* This illustrates strrchr */
//   ptr = ft_strrchr( buf, ch );
//   printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
// }

// /*****************  Output should be similar to:  *****************

// The first occurrence of p in 'computer program' is 'puter program'
// The last occurrence of p in 'computer program' is 'program'
// */