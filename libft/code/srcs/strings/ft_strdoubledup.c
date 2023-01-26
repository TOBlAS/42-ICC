/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdoubledup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobiaslst <tobiaslst@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:45:11 by tobiaslst         #+#    #+#             */
/*   Updated: 2023/01/24 11:17:51 by tobiaslst        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	**ft_strdoubledup(char **c)
{
	char	**out;
	int		nbrows;
	int		i;

	i = 0;
	nbrows = ft_strdoublelen(c);
	out = malloc(sizeof(char *) + (nbrows + 1));
	if (!out)
		return (NULL);
	while (c[i])
	{
		out[i] = ft_strdup(c[i]);
		if (!out[i])
		{
			ft_doublefree(out);
			return (NULL);
		}
		i++;
	}
	out[i] = NULL;
	return (out);
}
