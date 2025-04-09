/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:06:30 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/08 10:06:50 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (!s)
		return (NULL);
	if (i <= start)
		return (ft_strdup(""));
	i -= start;
	if (len > i)
		len = i;
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
/*
#include <stdio.h>
int	main()
{
	char *str = "Hello, World!";
	char *result;

    result = ft_substr(str, 7, 5);
	printf("Test 1: %s\n", result); // Expected: "World"
    free(result);

    // Test 2: Start index is 0
    result = ft_substr(str, 0, 5);
    printf("Test 2: %s\n", result); // Expected: "Hello"
    free(result);

    // Test 3: Length exceeds string length
    result = ft_substr(str, 0, 50);
    printf("Test 3: %s\n", result); // Expected: "Hello, World!"
    free(result);

    // Test 4: Start index is beyond string length
    result = ft_substr(str, 20, 5);
    printf("Test 4: %s\n", result); // Expected: '' (empty string)
    free(result);

    // Test 5: Start index is equal to string length
    result = ft_substr(str, ft_strlen(str), 5);
    printf("Test 5: %s\n", result); // Expected: '' (empty string)
    free(result);

    // Test 6: NULL input
    result = ft_substr(NULL, 0, 5);
    printf("Test 6: %s\n", result); // Expected: (NULL)
    free(result); // Should not free NULL, but just for safety

    return 0;
}
*/
