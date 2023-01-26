/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:32:25 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 15:34:14 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static void	find_borders(char const *s, char const *set, int *start, int *end)
{
	int	i;

	i = 0;
	*end = 0;
	while (is_set(set, s[i]))
		i++;
	*start = i;
	if (i != ft_strlen((char *)s))
	{
		i = ft_strlen((char *)s) - 1;
		while (is_set(set, s[i]))
			i--;
		*end = i + 1;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (NULL);
	find_borders(s1, set, &start, &end);
	if (start == ft_strlen((char *)s1))
		str = malloc(sizeof(char));
	else
		str = malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
