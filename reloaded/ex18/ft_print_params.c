/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:43:44 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/13 19:44:39 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
