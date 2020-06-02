/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:24:48 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/28 22:50:14 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char sign;

	sign = 'P';
	if (n < 0)
		sign = 'N';
	ft_putchar(sign);
}
