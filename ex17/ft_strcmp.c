/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirakos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:15:25 by skirakos          #+#    #+#             */
/*   Updated: 2024/01/11 19:15:28 by skirakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	if (s1 && s2)
	{
		while (s1 != '\0' || s2 != '\0')
		{
			if (*s1 != *s2)
				return (*s1 - *s2);
			s1++;
			s2++;
			if (*s1 == '\0' && *s2 == '\0')
				return (0);
		}
	}
	return (0);
}