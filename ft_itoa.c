/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:07:44 by yupeng            #+#    #+#             */
/*   Updated: 2023/02/09 01:09:12 by yupeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*tmp;

	len = num_len(n);
	tmp = (char *)malloc(len + 1);
	if (!tmp)
		return (NULL);
	tmp[len] = '\0';
	if (n < 0)
	{
		tmp[0] = '-';
		sign = 1;
	}
	else
		sign = 0;
	while (len-- > sign)
	{
		if (n < 0)
			tmp[len] = '0' - n % 10;
		else
			tmp[len] = '0' + n % 10;
		n /= 10;
	}
	return (tmp);
}
