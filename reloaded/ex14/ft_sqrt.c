/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:33:27 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/28 22:52:09 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int div;

	div = 1;
	if (nb < 0)
		return (0);
	while (nb / div >= div)
	{
		if (nb / div == div && nb % div == 0)
			return (div);
		div++;
	}
	return (0);
}
