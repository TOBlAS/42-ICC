/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:47:38 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 13:38:30 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	lst = *alst;
	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			lst = ft_lstlast(*alst);
			lst->next = new;
		}
	}
}
