/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitagaw <tkitagaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 03:41:57 by tkitagaw          #+#    #+#             */
/*   Updated: 2020/05/05 15:11:05 by tkitagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	error_put(int n)
{
	if (n <= 1)
		write(1, "File name missing.\n", 19);
	if (n > 2)
		write(1, "Too many arguments.\n", 20);
}

int		main(int argc, char **argv)
{
	int		nb;
	char	buf[3];
	int		rc;

	if (argc > 2 || argc == 1)
	{
		error_put(argc);
		return (0);
	}
	nb = open(argv[1], O_RDONLY);
	rc = read(nb, buf, sizeof(buf) - 1);
	while (rc > 1)
	{
		buf[rc] = '\0';
		write(1, buf, rc);
		rc = read(nb, buf, sizeof(buf) - 1);
	}
	if (rc == 1)
		write(1, "\n", 1);
	close(nb);
}
