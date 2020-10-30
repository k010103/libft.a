/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 04:20:28 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/17 16:02:09 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		chk(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	s[10];

	if (n == -2147483648 || n == 0)
		chk(n, fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		i = 0;
		while (n > 0)
		{
			s[i] = n % 10 + '0';
			n = n / 10;
			i++;
		}
		while (i - 1 >= 0)
		{
			ft_putchar_fd(s[i - 1], fd);
			i--;
		}
	}
}
