/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:21:30 by taehooki          #+#    #+#             */
/*   Updated: 2022/04/14 12:21:40 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;
	
	ptr = s;
	i = 0;
	while(i < n)
	{
		if(ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
