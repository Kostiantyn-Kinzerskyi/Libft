/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkinzers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:36:22 by kkinzers          #+#    #+#             */
/*   Updated: 2018/11/18 16:35:50 by kkinzers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t s;

	i = 0;
	s = 0;
	while (i < len)
	{
		dst[i] = src[s];
		if (src[s])
			s++;
		i++;
	}
	return (dst);
}
