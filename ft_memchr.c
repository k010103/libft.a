/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 00:12:36 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/12 18:53:58 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chk;
	unsigned char	*a;
	unsigned int	i;

	chk = (unsigned char)c;
	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == chk)
			return (&a[i]);
		i++;
	}
	return (0);
}
