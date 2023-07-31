/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:02:45 by jbranco-          #+#    #+#             */
/*   Updated: 2023/07/31 18:08:05 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen((char *)src);
	new = malloc((size + 1) * sizeof(char) );
	if (new != 0)
	{
		while (src[i])
		{
			new[i] = src[i];
			i++;
		}	
	}
	else
	{
		return (0);
	}
	new[i] = '\0';
	return (new);
}
/*int main()
{
	printf("%s", ft_strdup("adshfgfag"));
}*/
