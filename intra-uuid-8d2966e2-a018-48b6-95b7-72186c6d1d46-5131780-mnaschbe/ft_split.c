/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:27:43 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:12:33 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char	*ft_malloc(char *s, int i, int a)
{
	s = malloc(sizeof(char) * i + a);
	return (s);
}

char	**scntr(const char *s, char c)
{
	char	**array;
	int		i;
	int		x;

	i = 0;
	x = 0;
	while(s)
	{
		array[a][x] = s[x];
		if(s[x] == c)
		{
			*array[a] = ft_malloc(*array[a], x, i);
			i++;
			s[x] = NULL;
		}
		x++;
		a++;
	}
	return (*array);
}

int	count(const char *s, char c)
{
	int		i;
	int		i;
	int		x;
	size_t	i;
	char	*s;

	i = 0;
	while(s)
	{
		array;
	i = 0;
	x = 0;
	while(s)
	{
		array[a][x] = s[x];
		if(s[x] == c)
		{
			*array[a] = ft_malloc(*array[a], x, i);
			i++;
			s[x] = NULL;
		}
		x++;
		a++;
	}
	return (*array);
}*/
char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (s == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_free(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c)
			|| (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	b;
	size_t	save;

	i = 0;
	b = 0;
	array = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!array)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[b] != '\0')
	{
		while (s[b] == c)
			b++;
		save = b;
		while (s[b] != c && s[b] != '\0')
			b++;
		array[i] = ft_strndup(&s[save], b - save);
		if (array[i++] == 0)
			return (ft_free(array));
	}
	return (array);
}

/*int	main(void)
{
	char	delimiter;
	char	**token;
	int		i;

	const char text[] = "Hello,World,How,Are,You";
	delimiter = ',';
	token = ft_split(text, delimiter);
	i = 0;
	while (token[i])
	{
		printf("%s", token[i]);
		printf("\n");
		i++;
	}

	while (token != NULL)
	{
		printf("%s\n", token);
		token = ft_split(NULL, delimiter);
}*/
