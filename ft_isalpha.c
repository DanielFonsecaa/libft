/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:37:12 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/04 16:00:33 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_isalpha(97));
	printf("%d\n",ft_isalpha(68));
	printf("%d\n",ft_isalpha(75));
	printf("%d\n",ft_isalpha(4));
	printf("%d\n",ft_isalpha(6));
	return (0);
}
*/
