/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:23:08 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/13 19:23:19 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
