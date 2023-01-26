/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:04:01 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 14:57:08 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	find_length(long n)
{
	int	i;

	if (n < 0)
		n = -n;
	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	create_str(int *n, long *n_cpy, char **str, int *i)
{
	if (*n < 0)
	{
		*i = find_length((long)-*n) + 1;
		*str = malloc(sizeof(char) * (find_length((long)-*n) + 2));
		*n_cpy = (long)*n * -1;
	}
	else
	{
		*i = find_length((long)*n);
		*str = malloc(sizeof(char) * (find_length((long)*n) + 1));
		*n_cpy = *n;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	n_cpy;
	int		i;

	create_str(&n, &n_cpy, &str, &i);
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	str[i--] = '\0';
	while (n_cpy > 9)
	{
		str[i--] = (n_cpy % 10) + '0';
		n_cpy /= 10;
	}
	str[i] = n_cpy + '0';
	return (str);
}
