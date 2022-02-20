/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:54:50 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/27 20:31:31 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
