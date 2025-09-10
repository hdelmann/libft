/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 04:19:08 by hdelmann          #+#    #+#             */
/*   Updated: 2022/04/08 04:29:11 by hdelmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(char a, int fd)
{
	write(fd, &a, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_print('-', fd);
		ft_putnbr_fd(21474, fd);
		ft_putnbr_fd(83648, fd);
	}
	else if (nb < 0)
	{
		nb = (-1) * nb;
		ft_print('-', fd);
		ft_putnbr_fd(nb, fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_print(nb + '0', fd);
	}
}
