/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:31:34 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/13 19:32:48 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int ans;

	ans = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		ans = ans * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (ans);
}
