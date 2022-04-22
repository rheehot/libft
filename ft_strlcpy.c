/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:31:22 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/15 15:31:24 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
    if (!src)
        return (0);
    if (dstsize)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            ++i;
        }
        dst[i] = '\0';
    }
    while(src[i])
        i++;
	return (i);
}