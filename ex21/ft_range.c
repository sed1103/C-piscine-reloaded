/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirakos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:24:17 by skirakos          #+#    #+#             */
/*   Updated: 2024/01/11 19:24:19 by skirakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*n;

	if (min >= max)
		return (0);
	n = (int *)malloc(sizeof(int) * (max - min));
	if (n)
	{
		i = 0;
		while (min != max)
		{
			n[i] = min++;
			i++;
		}
		return (n);
	}
	return (0);
}
