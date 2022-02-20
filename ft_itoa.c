/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:29:35 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/26 19:35:59 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_int(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		i++;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = count_int(nb);
	if (nb < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
		nb *= -1;
	str[len] = '\0';
	while (len--)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
