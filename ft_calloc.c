/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-fons <dda-fons@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:43:50 by dda-fons          #+#    #+#             */
/*   Updated: 2025/04/07 20:55:09 by dda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	m;

	m = size * nmemb;
	if (nmemb == 0 || size == 0)
	{
		ret = malloc(1);
		if (!ret)
			return (NULL);
		ft_bzero(ret, 1);
		return (ret);
	}
	if (!nmemb || !size || (m / nmemb != size))
		return (NULL);
	ret = malloc(m);
	if (!ret)
		return (NULL);
	ft_bzero(ret, m);
	return (ret);
}
