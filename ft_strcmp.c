/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:06:09 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/26 20:45:37 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t		cpt;

	cpt = 0;
	while (s1[cpt] != '\0' && s2[cpt] != '\0' && s1[cpt] == s2[cpt])
		cpt++;
	return ((int)s1[cpt] - s2[cpt]);
}
