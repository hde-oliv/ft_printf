/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:07:06 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:07:07 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	void	*p;

	i = ft_strlen(s1) + 1;
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, i);
	return (p);
}
