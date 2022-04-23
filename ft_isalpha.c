/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:26:56 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/15 15:26:58 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isalpha(int c)
{
	return (65 <= c && c <= 90 || 97 <= c && c <= 122);
}