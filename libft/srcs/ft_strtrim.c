/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:07:59 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:08:01 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*strchk(char const *s1, char const *set)
{
	char const	*s;

	s = set;
	while (*set)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)set)
			return (strchk(++s1, s));
		set++;
	}
	return (s1);
}

static char const	*strchkb(char const *s, char const *s1, char const *set)
{
	char const	*set_s;

	set_s = set;
	if (s == s1)
		return (s);
	while (*set)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)set)
			return (strchkb(s, --s1, set_s));
		set++;
	}
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*s;
	char const	*e;
	char		*p;
	size_t		i;

	i = ft_strlen(s1);
	if (!i)
		return (ft_strdup(s1));
	s = strchk(s1, set);
	e = strchkb(s1, &s1[i - 1], set);
	if (s == s1 && e == &s1[i - 1])
		return (ft_strdup(s1));
	if (e == s1)
		e = &s1[i - 1];
	i = e - s + 2;
	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, i);
	return (p);
}
