/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:42:53 by ikoukou           #+#    #+#             */
/*   Updated: 2021/12/01 21:56:35 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			i++;
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

static int	count_chars(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	*leak(char **tab, int j)
{
	while (j-- >= 0)
		free(tab[j]);
	free(tab);
	return (NULL);
}

static char	*alloc_fill(char **tab, char *src, char c)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (src[k] == c)
		k++;
	while (j < count_words(src, c))
	{
		i = 0;
		tab[j] = (char *)malloc(sizeof(char) * count_chars(&src[k], c) + 1);
		if (!tab[j])
			return (leak(tab, j));
		while (src[k] && src[k] != c)
			tab[j][i++] = src[k++];
		tab[j][i] = '\0';
		while (src[k] && src[k] == c)
			k++;
		j++;
	}
	tab[j] = NULL;
	return (*tab);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**tab;

	j = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	*tab = alloc_fill(tab, (char *)s, c);
	return (tab);
}
