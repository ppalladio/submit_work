/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:45:03 by yupeng            #+#    #+#             */
/*   Updated: 2023/01/26 14:48:52 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
//     int i = 1;
//     printf("%d\n",ft_isascii(i));
// 	printf("%d\n",isascii(i));}
	// The values returned are 
	//!nonzero if the character c falls 
	//into the tested class, and zero if not.