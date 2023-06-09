/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:03:42 by jbranco-          #+#    #+#             */
/*   Updated: 2022/11/24 14:50:50 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_zero(int n, char *str)
{
	if (n == 0)
		str = ft_strdup("0");
	return (str);
}

static int	ft_size_char(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_size_char(n);
	str = malloc(i * sizeof(char) + 1);
	str[i--] = '\0';
	if (n == -2147483648)
	{
		n = -214748364;
		str[i--] = '8';
	}
	str = ft_zero(n, str);
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
