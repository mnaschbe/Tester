/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:43:27 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:19:25 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_putendal_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(i != ft_strlen(s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd(fd, '\n');
}

void	ft_putlong_nbr_fd(int fd, long int nb)
{
	char	*s;
	long	*a;

	if (nb < 0)
	{
		ft_putchar_fd(fd, '-');
		nb = -nb;
		ft_putlong_nbr_fd(fd, nb);
	}
	else if (nb >= 10)
	{
		ft_putlong_nbr_fd(fd, nb / 10);
		ft_putlong_nbr_fd(fd, nb % 10);
	}
	else
	{
		a = (long *)ft_itoa(nb + 0);
		s = (char *)a;
		ft_putendal_fd(s, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long long int	t;

*/
void	ft_putnbr_fd(int n, int fd)
{
	int	t;

	t = n;
	if (t < 0)
	{
		t *= -1;
		ft_putchar_fd('-', fd);
	}
	if (t > 9)
	{
		ft_putnbr_fd((t / 10), fd);
		ft_putchar_fd((t % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((t + '0'), fd);
}

/*int	main(void)
{
	int number =
		-12345;
		// Replace with the integer you want to print
	int fd = open("/nfs/homes/mnaschbe/ProTee/Teepot/COMMON CORE/libft/AGAIN",
			O_RDWR | O_TRUNC | O_CREAT);
		// File descriptor 1 represents standard output (console)

	ft_putnbr_fd(number, fd);

	return (0);
}*/
