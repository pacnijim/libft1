/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 22:12:05 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/12 22:12:06 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	cpt;

	d = (char *)dst;
	s = (char *)src;
	cpt = 0;
	if (!src)
		return (0);
	while (cpt < n)
	{
		d[cpt] = s[cpt];
		cpt++;
	}
	return (dst);
}
