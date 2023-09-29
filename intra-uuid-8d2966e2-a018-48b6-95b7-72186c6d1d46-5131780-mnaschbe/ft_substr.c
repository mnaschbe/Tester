/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:07:02 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:15:44 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define AC_BLACK "\x1b[30m"
#define AC_RED "\033[0;31m"
#define AC_GREEN "\x1b[32m"
#define AC_YELLOW "\x1b[33m"
#define AC_BLUE "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN "\x1b[36m"
#define AC_WHITE "\x1b[37m"
#define AC_NORMAL "\x1b[m"
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*result;
	unsigned int	sl;

	sl = strlen(s);
	i = 0;
	result = (char *)malloc((len + 2) * sizeof(char));
	if (!(result))
		return (NULL);
	while ((start) < sl)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	char	*output;

	char input[] = "Hello, World!";
	// Extract a substring starting at position 7 with a length of 5
	output = ft_substr(input, -11, -118);
	if (output != NULL)
	{
		printf("%sSubstring:%s\n", AC_GREEN, output);
		// Free the dynamically allocated memory
		free(output);
	}
	else
	{
		printf("%sInvalid indices or memory allocation failed.", AC_RED);
	}
	return (0);
}*/