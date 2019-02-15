/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:06:31 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/05 18:06:42 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		cpt;
	size_t		len;
	size_t		len2;

	cpt = 0;
	len = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (n < len)
		return (len2 + n);
	while ((len + cpt) < n - 1 && src[cpt] != '\0')
	{
		dst[len + cpt] = src[cpt];
		++cpt;
	}
	dst[len + cpt] = '\0';
	return (len + len2);
}
