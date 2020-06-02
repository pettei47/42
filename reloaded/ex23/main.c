/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 01:13:26 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/04/28 01:19:59 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 32;
	point->y = 16;
}

int		main(void)
{
	t_point point;
	set_point(&point);

	printf("%d\n%d\n", point.x, point.y);
	return (0);
}
