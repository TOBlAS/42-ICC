/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:22:03 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 15:11:23 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_lst;

	if (lst)
	{
		while (*lst)
		{
			temp_lst = (*lst)->next;
			ft_lstdelone((*lst), (*del));
			*(lst) = temp_lst;
		}
	}
}
