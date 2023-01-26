/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:35:31 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 13:39:20 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
