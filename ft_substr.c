/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:08:22 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/25 01:08:24 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(len + 1);
	if (!s || !(tmp))
		return (NULL);
	if ((size_t)start >= ft_strlen(s) || !(ft_strlcpy(tmp, s + start, len + 1)))
		tmp[0] = '\0';
	return (tmp);
}
