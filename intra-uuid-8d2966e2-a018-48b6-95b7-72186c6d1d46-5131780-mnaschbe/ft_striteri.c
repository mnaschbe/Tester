/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:17:36 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:19:11 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*fa)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		fa(index, s);
		index++;
	}
}

void	fa(unsigned int a, char *s)
{
	s += a;
}

/*int	main(void)
{
	char *s;
	s = "Hello World";
	ft_striteri(s, fa);
}*/
