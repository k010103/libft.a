/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:56:40 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/12 18:56:04 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
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
		des[i] = sou[i];
		i++;
	}
	return (des);
}
