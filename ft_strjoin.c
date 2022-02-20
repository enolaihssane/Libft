/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:05:44 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/27 20:34:20 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		len;

	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	new_s = (char *)malloc(len + 1);
	if (!new_s)
		return (0);
	ft_strlcpy(new_s, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_s, s2, len + 1);
	return (new_s);
}
