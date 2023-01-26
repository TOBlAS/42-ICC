/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:33:02 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 14:33:26 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static char	*return_empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;

	if (!s || start > (unsigned int)(ft_strlen((char *) s)))
		return (return_empty_string());
	if (ft_strlen((char *)s + start) + 1 <= (int)len)
		dst = malloc(sizeof(char) * ft_strlen((char *)s + start + 1));
	else
		dst = malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (s[i + start] && i <= (int)len)
	{
		dst[i] = s[i + start];
		i++;
	}
	if (i <= (int)len)
		dst[i] = '\0';
	else
		dst[i - 1] = '\0';
	return (dst);
}
