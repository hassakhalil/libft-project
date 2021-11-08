/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhalil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:05:34 by hkhalil           #+#    #+#             */
/*   Updated: 2021/11/08 16:06:03 by hkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_size(long k, int sign)
{
	int	i;

	i = 1;
	while (k > 9)
	{
		k = k / 10;
		i++;
	}
	if (sign == -1)
		i++;
	return (i + 1);
}

char	*ft_itoa(int n)
{
	 int	i;
	 int	sign;
	long	k;
	char	*s;

	k = n;
	sign = 1;
	if (k < 0)
		k = k * (sign = -1);
	s = malloc((i = string_size(k, sign)));
	if (!s)
		return (0);
	s[i - 1] = 0;
	while (k > 9)
	{
		s[i - 2] = (k % 10) + '0';
		k = k / 10;
		i--;
	}
	s[i - 2] = k + '0';
	if (n < 0)
		s[i - 3] = '-';
	return (s);
}
