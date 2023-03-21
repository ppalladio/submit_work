/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:54:35 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/26 15:24:29 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = b;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}

// int main()
// {
// 	char *c = "asc";
// 	void *s;
// 	s = &c;

// 	int i = 5;

// 	printf("%f\n",ft_bzero(s,i));
// 	printf("%s\n",bzero(cc,i));
// }

// #include <stdio.h>
// 	int main(){
// 	char str[10]="popo";
// 	void *ptr;
// 	ptr = (&str);
// 	char *cptr = (char *)(ptr);
// 	while(*cptr != '\0'){
// 		printf("%c",*cptr);
// 		cptr++;
// 	}
// 	return 0;
// }