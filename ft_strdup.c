/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:14:14 by yupeng            #+#    #+#             */
/*   Updated: 2023/02/08 22:14:32 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ch;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		size++;
	ch = (char *)malloc(sizeof(char) * (size +1));
	if (!ch)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ch[i] = s1[i];
		i++;
	}
	ch[i] = '\0';
	return (ch);
}

// int main()
// {
// 	char *s = "mystring";
// 	char *dup1 = ft_strdup(s);
// 	char *dup2 = strdup(s);
// 	printf("%p\n",ft_strdup(s));
// 	printf("%s\n",dup1);
// 	printf("%p\n",strdup(s));
// 	printf("%s\n",dup2);
	//! why +1!!!
// }