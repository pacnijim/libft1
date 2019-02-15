/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 21:24:39 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/12 21:24:41 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	charac;
	int		len;

	charac = c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == charac)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
