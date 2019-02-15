/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:57:41 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/04 14:57:49 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		crsr;

	crsr = 0;
	if (!src)
		return (NULL);
	while (crsr < n && src[crsr])
	{
		dst[crsr] = src[crsr];
		crsr++;
	}
	while (crsr < n)
	{
		dst[crsr] = '\0';
		crsr++;
	}
	return (dst);
}
