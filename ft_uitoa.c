/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:42:03 by mmohd-fa          #+#    #+#             */
/*   Updated: 2023/03/11 05:02:54 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unumlen(unsigned int n)
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

char	*ft_uitoa(unsigned int n)
{
	char	*nstr;
	int	len;

	len = unumlen(n);
	nstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nstr)
		return (0);
	nstr[len] = '\0';
	while (n != 0)
	{
		nstr[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (nstr);
}

int	ft_putunsigned(int num)
{
	int	len;
	char	*nstr;

	len = 0;
	if (num == 0)
		len += write(1, "0", 1);
	else
	{
		nstr = ft_uitoa(num);
		len += ft_putstr(nstr);
		free(nstr);
	}
	return (len);
}
