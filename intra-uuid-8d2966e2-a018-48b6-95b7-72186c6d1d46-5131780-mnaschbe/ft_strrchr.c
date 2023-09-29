/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:02:34 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:02:35 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (str[i])
	{
		if (str[i] == c)
			p = (char *)str + i;
		i++;
	}
	if (str[i] == c)
	{
		p = (char *)str + i;
	}
	return (p);
}
