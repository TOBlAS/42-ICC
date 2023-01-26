/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:30:47 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 14:31:03 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	position;

	i = 0;
	position = -1;
	while (s[i])
	{
		if ((s[i] % 256) == (c % 256))
			position = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (position != -1)
		return ((char *)s + position);
	return (NULL);
}
