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
    int     len_total;
    int     len_s1;
    int     len_s2;

    if (!s1 || !s2)
        return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    len_total = len_s1 + len_s2 + 1;
    if (!(tmp = (char *)malloc(sizeof(char) * len_total)))
        return (NULL);
    ft_memcpy(tmp, s1, len_s1);
    ft_strlcat(tmp, s2, len_total);
    return (tmp);
}
