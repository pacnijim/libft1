/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 17:43:32 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/25 22:57:35 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int			cpt;
	int			cpt2;
	char		*str;

	cpt = (int)start - 1;
	cpt2 = 0;
	if ((str = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (s[++cpt] && cpt < (int)len)
	{
		str[cpt2] = s[cpt];
		cpt2++;
	}
	str[cpt2] = '\0';
	return (str);
}
