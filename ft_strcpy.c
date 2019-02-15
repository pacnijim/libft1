/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:44:43 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/04 14:44:48 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		crsr;

	crsr = 0;
	while (src[crsr] != '\0')
	{
		dst[crsr] = src[crsr];
		crsr++;
	}
	dst[crsr] = '\0';
	return (dst);
}
