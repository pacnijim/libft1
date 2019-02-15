/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 17:28:45 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/13 17:28:46 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		cpt;
	int		cpt2;

	cpt2 = 0;
	cpt = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[cpt] != '\0')
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
