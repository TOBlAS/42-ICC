/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:29:04 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 13:38:58 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (lst != NULL)
	{
		i = 1;
		while (lst->next)
		{
			i++;
			lst = lst->next;
		}
		return (i);
	}
	return (0);
}
