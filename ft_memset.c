/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:14:11 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/12 19:10:27 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*s;
	size_t			i;

	s = ptr;
	i = 0;
	while (i < num)
	{
		s[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
