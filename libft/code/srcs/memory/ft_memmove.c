/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:42:56 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 13:44:19 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptr_d;
	const char	*ptr_s;

	ptr_d = dst;
	ptr_s = src;
	if (ptr_d > ptr_s)
	{
		while (len-- > 0)
			ptr_d[len] = ptr_s[len];
	}
	else
		return (ft_memcpy(ptr_d, ptr_s, len));
	return (dst);
}
