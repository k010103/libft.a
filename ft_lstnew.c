/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 23:36:59 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/12 18:49:26 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*num;

	num = (t_list *)malloc(sizeof(t_list));
	if (!num)
		return (NULL);
	num->content = content;
	num->next = NULL;
	return (num);
}
