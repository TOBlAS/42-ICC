/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobiaslst <tobiaslst@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:56:21 by tobiaslst         #+#    #+#             */
/*   Updated: 2023/01/17 15:56:32 by tobiaslst        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strndup(char *s, int n)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * (n + 1));
	if (!result)
		return (NULL);
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
