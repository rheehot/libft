/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:32:50 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/15 15:32:51 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t len;
	len = ft_strlen(s);
	while (len != 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)(s + len));
	return (0);    
}