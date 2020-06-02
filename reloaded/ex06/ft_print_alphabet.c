/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:22:34 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/13 19:22:38 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
