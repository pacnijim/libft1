/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 17:41:42 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/21 16:44:36 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		cpt;
	int		cpt2;

	cpt2 = -1;
	cpt = -1;
	if (s1 == NULL && s2)
		return ((char *)s2);
	else if (s1 && s2 == NULL)
		return ((char*)s1);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str || (!s1 && !s2))
		return (NULL);
	while (s1[++cpt])
		str[cpt] = s1[cpt];
	while (s2[++cpt2])
		str[cpt++] = s2[cpt2];
	str[cpt] = '\0';
	return (str);
}
