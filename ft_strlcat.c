/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:24:38 by hdelmann          #+#    #+#             */
/*   Updated: 2022/11/09 14:44:34 by hdelmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	if (size == 0 && dst == NULL )
		return (src_length);
	dest_length = ft_strlen(dst);
	i = 0;
	if (dest_length >= size)
		return (size + src_length);
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[dest_length + i] = src[i];
			i++;
		}
		dst[dest_length + i] = 0;
	}
	dst[dest_length + i] = '\0';
	return (dest_length + src_length);
}
