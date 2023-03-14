/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:34:30 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/03/11 05:44:11 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

//--ft_printf.c--//
int	ft_printf(const char *str, ...);
int	check(const char str, va_list *args);

//--utils.c--//
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_printstr(char *str);
int	ft_strlen(char *str);

//--ft_putnum.c--//
int	numlen(int n);
int	ft_putnum(int num);

//--ft_itoa.c--//
unsigned int	abs_val(int x, int *sign);
void	ft_strrev(char *str);
int	num_digits(int num);
char	*final(int sign, int digits, char *results);
char	*ft_itoa(int n);

//--ft_uitoa.c--//
int	ft_putunsigned(int num);
char	*ft_uitoa(unsigned int n);
int	unumlen(unsigned int n);

//--ft_puthex.c--//
int	ft_puthex(unsigned int num, const char format);
void	writehex(unsigned int num, const char format);
int	hexlen(unsigned int n);

//--ft_putptr--//
int	ft_putptr(unsigned long long ptr);
void	writeptr(uintptr_t num);
int	ptrlen(uintptr_t num);

#endif
