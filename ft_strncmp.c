/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:39:40 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/06 11:39:42 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		cpt;

	cpt = 0;
	if (n == 0)
		return (0);
	while (s1[cpt] && s2[cpt] && s1[cpt] == s2[cpt] && cpt < (n - 1))
		cpt++;
	return ((int)s1[cpt] - s2[cpt]);
}
