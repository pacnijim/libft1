/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:10:12 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/04 17:10:15 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int		cpt;
	int		len;

	cpt = 0;
	if (s2 == NULL)
		return (s1);
	len = ft_strlen(s1);
	while (s2[cpt] != '\0')
	{
		s1[len + cpt] = s2[cpt];
		cpt++;
	}
	s1[len + cpt] = '\0';
	return (s1);
}
