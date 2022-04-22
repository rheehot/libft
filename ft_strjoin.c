/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:17:57 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/25 01:17:58 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *tmp;
    int     len;

    len = strlen(s1) + strlen(s2) + 1;
    if (!s1 || !s2 || !(tmp = (char *)malloc(len)))
        return (NULL);
    ft_memcpy(tmp, s1, ft_strlen(s1));
    ft_strlcat(tmp, s2, len);
    return (tmp);
}
