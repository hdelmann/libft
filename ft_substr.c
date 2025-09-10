/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 04:27:15 by hdelmann          #+#    #+#             */
/*   Updated: 2022/11/09 15:03:26 by hdelmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	t_substr	z;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		z.str = malloc(1);
		z.str[0] = '\0';
		return (z.str);
	}
	if (len <= ft_strlen(s) - start)
		z.str = (char *)malloc(sizeof(*s) * (len + 1));
	else
		z.str = malloc(ft_strlen(s) - start + 1);
	if (z.str == 0)
		return (NULL);
	z.i = -1;
	z.j = 0;
	while (s[++z.i])
	{
		if (z.i >= start && z.j < len)
			z.str[z.j++] = s[z.i];
	}
	z.str[z.j] = 0;
	return (z.str);
}
