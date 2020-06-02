/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 14:30:53 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/05/02 03:29:44 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ary;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	ary = (int *)malloc(sizeof(int) * (max - min + 1));
	while (i < (max - min))
	{
		ary[i] = min + i;
		i++;
	}
	return (ary);
}
