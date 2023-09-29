/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:18:56 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:21:12 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*sc;
	unsigned char	*dst;

	i = 0;
	sc = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (i < n && dst[i] && sc[i])
	{
		dst[i] = sc[i];
		i++;
	}
	return (dst);
}

/*int main()
{
	char *src = malloc(20);
	char *dest = malloc(20);

	src = strcpy(src, "12345678");
	dest = strcpy(dest, "00000001");

	printf("\nOG_SOURCE_STRING => %s\nOG_DESTINATION_STRING =>
		%s\n__________________________\n\n",src ,dest);
	dest = ft_memcpy(src, dest, 9);
	printf("OG_SOURCE_STRING => %s\nNEW_DESTINATION_STRING =>
		%s\n\n__________________________\n",src ,dest);
}*/
