/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:35:55 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/04 19:37:09 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_isdigit(48));
	printf("%d\n",ft_isdigit(50));
	printf("%d\n",ft_isdigit(56));
	printf("%d\n",ft_isdigit(4));
	printf("%d\n",ft_isdigit(6));
	return (0);
}
*/
