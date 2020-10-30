/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 19:23:44 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/16 20:56:56 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tomp;

	if (!lst)
		return ;
	while (*lst)
	{
		tomp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tomp;
	}
	*lst = NULL;
}
