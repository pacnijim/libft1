/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 22:22:59 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/20 14:07:21 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	cpt;

	cpt = 0;
	while (cpt < n)
	{
		((char *)dst)[cpt] = ((char *)src)[cpt];
		if (((unsigned char *)dst)[cpt] == ((unsigned char)c))
			return (&((char *)dst)[cpt + 1]);
		cpt++;
	}
	return (0);
}
