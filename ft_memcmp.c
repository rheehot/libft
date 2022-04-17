/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:06:01 by taehooki          #+#    #+#             */
/*   Updated: 2022/04/13 19:06:05 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *uv1;
    unsigned char   *uv2;
    size_t          i;

    i = 0;
    uv1 = s1;
    uv2 = s2;
    while(i<n)
    {
        if (uv1[i] != uv2[i])
            return(uv1[i] - uv2[i]);
        i++;
    }
    return (0);
}