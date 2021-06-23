/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:05:07 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/05/20 17:06:37 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *) src != (unsigned char) c)
			*(unsigned char *) dst++ = *(unsigned char *) src++;
		else
		{
			*(unsigned char *) dst = *(unsigned char *) src;
			return (++dst);
		}
	}
	return (NULL);
}
