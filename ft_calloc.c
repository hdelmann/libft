/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 05:11:46 by hdelmann          #+#    #+#             */
/*   Updated: 2022/11/09 16:28:23 by hdelmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;

	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (0);
	if (nmemb > ((size_t)-1) / size)
		return (0);
	r = (void *)malloc(size * nmemb);
	if (!r)
		return (0);
	ft_bzero(r, size * nmemb);
	return ((void *)r);
}
