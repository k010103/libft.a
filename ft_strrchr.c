/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:54:53 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/15 17:37:15 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int character)
{
	int		i;
	int		num;

	i = 0;
	num = -1;
	if (character == '\0')
		return (str + ft_strlen(str));
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == character)
			num = i;
		i++;
	}
	if (num != -1)
		return (&str[num]);
	else
		return (0);
}
