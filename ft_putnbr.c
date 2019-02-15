/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:01:03 by panijimb          #+#    #+#             */
/*   Updated: 2014/11/04 14:01:08 by panijimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	int		diviseur;

	diviseur = 1;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while ((n / diviseur) >= 10)
		diviseur *= 10;
	while (diviseur != 0)
	{
		ft_putchar('0' + n / diviseur % 10);
		diviseur /= 10;
	}
}
