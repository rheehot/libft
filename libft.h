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

# include <stdlib.h>

// String
size_t              ft_strlen(const char *s);
char                *ft_strchr(const char *s, int c);
char                *ft_strrchr(const char *s, int c);
int                 ft_strncmp(const char *s1, const char *s2, size_t n);

// Memory
void                *ft_memset(void *b, int c, size_t len)

// Etc
int                 ft_isalpha(int c);
int                 ft_isdigit(int c);
int                 ft_isalnum(int c);
int                 ft_isascii(int c);
int                 ft_isprint(int c);

#endif
