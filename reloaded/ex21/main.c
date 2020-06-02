/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 14:46:01 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/05/02 03:29:17 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	ft_putnbr(int nb);
int		*ft_range(int min, int max);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		int min;
		int max;
		int *out;
		int i;

		i = 0;
		min = ft_atoi(argv[1]);
		max = ft_atoi(argv[2]);
		out = ft_range(min, max);
		if(min < max)
		{
			while(i < (max - min))
			{
				ft_putnbr(out[i]);
				i++;
				ft_putstr(",");
			}
		}
	}
	return (0);
}
