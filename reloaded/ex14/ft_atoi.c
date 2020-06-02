/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:33:18 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/13 19:34:04 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nbr)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (nbr[i] - '-' == 0)
	{
		sign = -1;
		i = 1;
	}
	while (nbr[i])
	{
		nb = nb * 10 + nbr[i] - '0';
		i++;
	}
	return (sign * nb);
}