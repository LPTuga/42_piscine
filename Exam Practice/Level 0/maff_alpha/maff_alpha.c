/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:17:23 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 10:22:37 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	i;

	i = 'a';
	while (i <= 121)
	{
		ft_putchar(i);
		ft_putchar(i - 31);
		i++;
		i++;
	}
	ft_putchar('\n');
}
