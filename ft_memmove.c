/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:31:12 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/15 15:31:13 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *usrc;
	unsigned char *udst;
	unsigned char tmp[len];

	if (dst == NULL && src == NULL)
		return (0);
	usrc = (unsigned char *)src;
	udst = (unsigned char *)dst;
	ft_memcpy(tmp, usrc, len);
	ft_memcpy(udst, tmp, len);
	return (dst);
}