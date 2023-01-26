/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:39:56 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 13:40:35 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*ptr;

	if (n == 0)
		return (NULL);
	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		if ((int)ptr[i] % 256 == (int)c % 256)
			return ((void *)s + i);
		i++;
	}
	if (c == '\0')
		return ((void *)s + i);
	return (NULL);
}
