/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:59:52 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/09 16:29:21 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_count_words(char *str, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
			words++;
		while (str[i] != c && str[i])
			i++;
	}
	return (words);
}

static char	*ft_dup(char *str, char c)
{
	char	*string;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i + j] != c && str[i + j])
		j++;
	string = ft_substr(str, i, j);
	if (!string)
		return (NULL);
	return (string);
}

char	**ft_split(const char *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	strings = malloc(sizeof(char *) * (ft_count_words((char *)s, c) + 1));
	if (!strings)
		return (NULL);
	while (i < ft_count_words((char *)s, c))
	{
		while (s[j] == c && s[j])
			j++;
		if (s[j] != c && s[j])
			strings[i++] = ft_dup((char *)&s[j], c);
		while (s[j] != c && s[j])
			j++;
	}
	strings[i] = 0;
	return (strings);
}
/*
#include <stdio.h>
int	main()
{
	char string[] = "hello!";
	char **ret = ft_split(string, ' ');
	for (size_t i = 0; i < 2; i++)
	{
		printf("%s\n", ret[i]);
		free(ret[i]);
	}
	free(ret);
}
*/
