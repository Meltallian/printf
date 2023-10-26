/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidaux <jeremie.bidaux@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:59:17 by jbidaux           #+#    #+#             */
/*   Updated: 2023/10/26 10:40:07 by jbidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

typedef unsigned long long	t_ull;

int		ft_atoi(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int c, size_t n);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
char	*ft_usitoa(unsigned int n);
size_t	ft_strlen(const char *c);
t_ull	ft_putchar(int c);
t_ull	ft_conv_c(char c);
t_ull	ft_conv_d(int d);
t_ull	ft_conv_s(char *str);
t_ull	ft_conv_i(int i);
t_ull	ft_conv_x(unsigned int n);
t_ull	ft_conv_capx(unsigned int n);
t_ull	ft_conv_p(t_ull n);
t_ull	ft_conv_u(unsigned int num);
t_ull	ft_conv_percent(int c);
t_ull	ft_format(va_list va, char *format, t_ull *i);
int		ft_printf(const char *str, ...);

#endif // FT_PRINTF_H