/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:07:51 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:07:52 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*i;

	i = s - 1;
	while (*s++)
		continue ;
	if ((unsigned char) c == '\0')
		return ((char *)--s);
	while (--s != i)
		if (*s == (unsigned char)c)
			return ((char *)s);
	return (NULL);
}
