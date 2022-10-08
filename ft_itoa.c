/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:06 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/06 10:19:27 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static void	ft_itos(char **str, long nb)
{
	long	i;

	i = ft_nblen(nb) - 1;
	if (nb < 0)
	{
		*str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[0][i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = (long) n;
	i = ft_nblen(nb);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	if (nb != 0)
	{
		str[i--] = '\0';
		ft_itos(&str, nb);
	}
	return (str);
}
