/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:13:33 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 13:34:07 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	t;

	i = 0;
	t = 13;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{ 
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				ft_putchar(argv[1][i] + 13);
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				ft_putchar(argv[1][i] - 13);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				ft_putchar(argv[1][i] + 13);
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				ft_putchar(argv[1][i] - 13);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
