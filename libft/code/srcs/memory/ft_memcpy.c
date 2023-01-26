/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:42:04 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 13:42:32 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*ptr_d;
	const char	*ptr_s;
	int			i;

	if (!dst && !src)
		return (NULL);
	ptr_d = dst;
	ptr_s = src;
	i = 0;
	while (i < (int)n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
	}
	return (dst);
}
