/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:23:34 by taehooki          #+#    #+#             */
/*   Updated: 2022/03/26 01:46:24 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

size_t              ft_strlen(const char *s);

int                 ft_isalpha(int c);
int                 ft_isdigit(int c);
int                 ft_isalnum(int c);
int                 ft_isascii(int c);
int                 ft_isprint(int c);

#endif
