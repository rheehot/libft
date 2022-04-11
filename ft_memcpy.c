/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:31:04 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/15 15:31:05 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;
    
    i = -1;
    if (dst != src && n)
        while (++i < n)
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
    return (dst);
}