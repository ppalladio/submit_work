/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:04:20 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/26 14:00:13 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	unsigned char c = 'c';
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d" ,isalpha(c));
// }

// RETURN VALUE
//        The values returned are //!nonzero
// if the character c falls into the tested class, and zero if not.