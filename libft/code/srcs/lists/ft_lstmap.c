/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:26:45 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 13:38:46 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_cpy_begin;
	t_list	*lst_cpy;
	t_list	*lst_temp;

	if (!lst)
		return (NULL);
	lst_cpy = ft_lstnew((*f)(lst->content));
	if (!lst_cpy)
		return (NULL);
	lst_cpy_begin = lst_cpy;
	while (lst)
	{
		lst = lst->next;
		if (lst)
		{
			lst_temp = ft_lstnew((*f)(lst->content));
			if (!lst_temp)
			{
				ft_lstclear(&lst_cpy_begin, (*del));
				return (NULL);
			}
			ft_lstadd_back(&lst_cpy, lst_temp);
		}
	}
	return (lst_cpy_begin);
}
