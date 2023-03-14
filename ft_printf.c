/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 05:39:26 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/03/11 05:44:22 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(const char str, va_list *args)
{
	if (str == 'c')
		return (ft_putchar(va_arg(*args,int)));
	if (str == '%')
		return (ft_putchar('%'));
	else if (str == 's')
		return (ft_printstr(va_arg(*args,char *)));
	else if (str == 'd' || str == 'i')
		return (ft_putnum(va_arg(*args,int)));
	else if (str == 'u')
		return (ft_putunsigned(va_arg(*args, unsigned int)));
	else if (str == 'x' || str == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), str));
	else if (str == 'p')
		return (ft_putptr(va_arg(*args, unsigned long long)));
	return (0);
}	

int	ft_printf(const char *str, ...)
{
	int	i;
	int	len;
	va_list	args;
	va_start(args, str);

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += check(str[i + 1], &args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
