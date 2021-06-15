/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:05:40 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/24 21:24:06 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*nxtwrd(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (s[i] == c)
	{
		while (s[i] == c && s[i])
			i++;
		return ((char *)s + i);
	}
	else
	{
		while (s[i] != c && s[i])
			i++;
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			return ((char *)s + i);
		}
		return (NULL);
	}
}

static size_t	wrdcnt(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			i++;
		}
	}
	return (i);
}

static char	*snxtwrd(char const *s, char c)
{
	if (*s == c)
		return (nxtwrd(s, c));
	else
		return ((char *) s);
}

static char	**freeall(char **a, size_t i)
{
	ft_dfree(a, i);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	char	*start;
	char	*next;
	size_t	i;
	size_t	j;

	a = (char **) malloc(sizeof(char *) * (wrdcnt(s, c) + 1));
	if (a == NULL)
		return (NULL);
	start = snxtwrd(s, c);
	i = 0;
	while (start && *start != '\0')
	{
		j = 0;
		next = nxtwrd(start, c);
		while (start[j] != c && start[j])
			j++;
		a[i++] = ft_substr(start, 0, j);
		if (a[i - 1] == NULL)
			return (freeall(a, i - 1));
		start = next;
	}
	a[i] = NULL;
	return (a);
}
