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
size_t              ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t              ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char                *ft_strchr(const char *s, int c);
char                *ft_strrchr(const char *s, int c);
char                *ft_strnstr(const char *haystack, const char *needle, size_t len);
int                 ft_strncmp(const char *s1, const char *s2, size_t n);

// Memory
void                *ft_memset(void *b, int c, size_t len);
void                ft_bzero(void *s, size_t n);
void                *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void                *ft_memmove(void *dst, const void *src, size_t len);
void                *ft_memchr(const void *s, int c, size_t n);
int                 *ft_memcmp(const void *s1, const void *s2, size_t n);


// Etc
int                 ft_isalpha(int c);
int                 ft_isdigit(int c);
int                 ft_isalnum(int c);
int                 ft_isascii(int c);
int                 ft_isprint(int c);
int                 ft_atoi(const char *str);
int                 ft_toupper(int c);
int                 ft_tolower(int c);


#endif
