/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:29:37 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/13 19:30:13 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int ans;

	ans = nb;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (nb-- > 1)
		ans = ans * nb;
	return (ans);
}
