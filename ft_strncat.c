/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:59:56 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/05 13:00:02 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		cpt;
	size_t		len;

	cpt = 0;
	if (s2 == NULL)
		return (s1);
	len = ft_strlen(s1);
	while (cpt < n && s2[cpt] != '\0')
	{
		s1[len + cpt] = s2[cpt];
		cpt++;
	}
	if (!*(s2 + cpt))
		s1[len + cpt] = '\0';
	return (s1);
}
