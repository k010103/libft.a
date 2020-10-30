/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 00:27:40 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/02 18:03:30 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	i = 0;
	pt1 = (unsigned char *)ptr1;
	pt2 = (unsigned char *)ptr2;
	while (i < num)
	{
		if (pt1[i] != pt2[i])
			return (pt1[i] - pt2[i]);
		i++;
	}
	return (0);
}
