/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirakos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:29:47 by skirakos          #+#    #+#             */
/*   Updated: 2024/01/11 20:52:58 by skirakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_display(char *filename)
{
	int		file_open;
	int		k;
	char	c;

	k = 1;
	file_open = open(filename, O_RDONLY);
	while (k > 0)
	{
		k = read(file_open, &c, 1);
		if (k > 0)
			write(1, &c, 1);
		else if (k == -1)
			ft_putstr("Cannot read file.\n");
	}
	close(file_open);
}

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	ft_display(argv[1]);
}
