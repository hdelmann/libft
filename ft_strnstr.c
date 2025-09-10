/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:59:32 by hdelmann          #+#    #+#             */
/*   Updated: 2022/11/09 14:49:31 by hdelmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	ns2;
	char	*ss1;

	i = 0;
	ss1 = (char *)s1;
	ns2 = ft_strlen(s2);
	if (s1 == NULL && n == 0)
		return (0);
	if (ns2 == 0 || s1 == s2)
		return (ss1);
	while (ss1[i] != '\0' && i < n)
	{
		j = 0;
		while (ss1[i + j] != '\0' && s2[j] != '\0'
			&& ss1[i + j] == s2[j] && i + j < n)
				j++;
		if (j == ns2)
			return (ss1 + i);
		i++;
	}
	return (0);
}
