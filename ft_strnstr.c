/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 18:01:21 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/13 18:01:23 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		cpt;
	size_t		cpt2;

	cpt2 = 0;
	cpt = 0;
	if (*s1 == '\0' || *s2 == '\0')
		return ((char *)s1);
	while (cpt < n && s1[cpt])
	{
		if (s2[cpt2] == '\0')
			return ((char *)s1 + (cpt - cpt2));
		if (s1[cpt] == s2[cpt2])
			cpt2++;
		else
			cpt2 = 0;
		cpt++;
	}
	if (s2[cpt2] == '\0')
		return ((char *)s1 + (cpt - cpt2));
	return (NULL);
}
