/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 05:39:58 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/05 03:42:55 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*num;

	num = malloc(count * size);
	if (!num)
		return (0);
	ft_memset(num, 0, count * size);
	return (num);
}
