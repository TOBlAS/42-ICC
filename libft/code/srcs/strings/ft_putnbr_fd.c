/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:10:02 by tcaborde          #+#    #+#             */
/*   Updated: 2022/12/09 14:10:34 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	ft_putnbr(int n, int fd)
{
	char	c;

	c = n + 48;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	n_cpy;

	n_cpy = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n_cpy = (long)n * -1;
	}
	if (n_cpy > 9)
	{
		ft_putnbr_fd(n_cpy / 10, fd);
		ft_putnbr(n_cpy % 10, fd);
	}
	else
		ft_putnbr(n_cpy, fd);
}
