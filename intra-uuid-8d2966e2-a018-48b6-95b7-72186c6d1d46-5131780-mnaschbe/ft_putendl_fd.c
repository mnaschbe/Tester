/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:35:41 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:25:17 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i != ft_strlen(s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd(fd, '\n');
}

/*int	main(void)
{
	char *s = "AMIGAA";
	int fd;

	fd = open("test.txt", O_RDWR | O_TRUNC);
	ft_putendl_fd(s, fd);
	return (0);
}*/
