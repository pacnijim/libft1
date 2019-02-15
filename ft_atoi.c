/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:06:38 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/06 12:06:41 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sign(int *cptr, int *c, int *cpt, const char *str)
{
	while (str[*cpt] == '+' || str[*cpt] == '-')
	{
		if (str[*cpt] == '+')
			(*cptr)++;
		if (str[*cpt] == '-')
			(*c)++;
		(*cpt)++;
	}
}

int		ft_atoi(const char *str)
{
	int		cpt;
	int		nb;
	int		cptr;
	int		c;

	c = 0;
	cptr = 0;
	nb = 0;
	cpt = 0;
	if (!str)
		return (0);
	while (str[cpt] == '\n' || str[cpt] == '\v' || str[cpt] == '\t'
			|| str[cpt] == '\r' || str[cpt] == '\f' || str[cpt] == ' ')
		cpt++;
	ft_sign(&cptr, &c, &cpt, str);
	while (str[cpt] != '\0' && str[cpt] >= '0' && str[cpt] <= '9')
	{
		nb *= 10;
		nb = nb + str[cpt] - 48;
		cpt++;
	}
	if (c == 1)
		nb *= -1;
	return ((cptr > 1 || c > 1 || (cptr == 1 && c == 1)) ? 0 : nb);
}
