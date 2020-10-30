/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:45:07 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/28 15:59:57 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char	*des;
	unsigned char	*sou;
	size_t			i;

	if (!destination && !source)
		return (0);
	des = (unsigned char *)destination;
	sou = (unsigned char *)source;
	i = 0;
	while (i < num)
	{
		if (source < destination)
			des[num - i - 1] = sou[num - i - 1];
		else
			des[i] = sou[i];
		i++;
	}
	return (des);
}
