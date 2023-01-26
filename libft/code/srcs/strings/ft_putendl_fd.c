/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:09:09 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 14:09:27 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	c;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			c = s[i];
			write(fd, &c, 1);
			i++;
		}
	}
	c = '\n';
	write(fd, &c, 1);
}
