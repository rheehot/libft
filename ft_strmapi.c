/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:19:28 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/25 01:19:29 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t len;
	size_t	i;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(res = (char *)malloc(len + 1)))
		return (0);
	*(res + len) = '\0';
	i = 0;
	while (i < len)
	{
		*(res + i) = f(i, *(s + i));
		i++;
	}
	return (res);
}
