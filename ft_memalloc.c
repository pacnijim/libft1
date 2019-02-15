/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 15:20:51 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/14 15:20:53 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;
	size_t	cpt;
	char	*memc;

	cpt = 0;
	if (size == 0)
		return (NULL);
	tmp = (void *)malloc((size) * sizeof(tmp));
	memc = (char *)tmp;
	while (cpt < size)
	{
		memc[cpt] = 0;
		cpt++;
	}
	return (tmp);
}
