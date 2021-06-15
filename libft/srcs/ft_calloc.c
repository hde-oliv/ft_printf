/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:04:01 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:06:17 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count * size > INT_MAX)
		return (NULL);
	else
	{
		p = malloc(count * size);
		if (p == NULL)
			return (NULL);
		if (count * size == 0)
			return (p);
		ft_bzero(p, count * size);
		return (p);
	}
}
