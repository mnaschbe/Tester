/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:47:23 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:05:03 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	slen;

	slen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (slen);
	while (src[i] <= '\0' && i < slen - 1)
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (slen);
}

/*int	main(void)
{
	char s1[] = "ONESIX";
	char s2[] = "TESEST";

	printf("%i \n", ft_strlcpy(s1, s2, 6));

}*/
