/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:05:21 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:06:45 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*p;

	p = dst;
	if (dst < src)
		while (len-- > 0)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	else if (dst > src)
		while (len-- > 0)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	return (p);
}
