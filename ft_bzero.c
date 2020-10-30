/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:43:50 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/12 20:57:43 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)ptr;
	i = 0;
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
}
