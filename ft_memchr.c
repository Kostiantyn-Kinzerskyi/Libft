/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkinzers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:10:24 by kkinzers          #+#    #+#             */
/*   Updated: 2018/11/17 17:20:59 by kkinzers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*d;

	d = (char *)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (char)c)
			return (&d[i]);
		i++;
	}
	return (NULL);
}
