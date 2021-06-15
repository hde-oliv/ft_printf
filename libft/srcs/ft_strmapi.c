/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:07:35 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:07:37 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	i = ft_strlen(s) + 1;
	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, i);
	i = 0;
	while (p[i])
	{
		p[i] = (*f)(i, p[i]);
		i++;
	}
	return (p);
}
