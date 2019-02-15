/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:17:09 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/04 15:17:11 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*nw;
	int		siz;

	if (!s1)
		return (NULL);
	siz = ft_strlen(s1);
	nw = (char *)malloc(sizeof(char) * siz + 1);
	if (!nw)
		return (NULL);
	ft_strcpy(nw, s1);
	return (nw);
}
