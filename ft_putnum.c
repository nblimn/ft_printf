/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 05:26:57 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/03/11 05:32:04 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_putnum(int num)
{
	int	len;
	char	*nstr;

	len = 0;
	if (num == 0)
		len += write(1, "0", 1);
	else
	{
		nstr = ft_itoa(num);
		len += ft_putstr(nstr);
		free(nstr);
	}
	return (len);
}
