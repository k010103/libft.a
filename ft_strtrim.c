/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 00:01:10 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/17 16:20:48 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		i;
	char		*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	if (len)
		while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > i)
			len--;
	if (len - i - 1 <= 0)
		return (ft_strdup(""));
	str = ft_substr((char *)s1, i, len - i);
	if (!str)
		return (0);
	return (str);
}
