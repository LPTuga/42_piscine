/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:36:39 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/08 11:39:16 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pn;

	if (n >= 0)
	{
		pn = 'P';
		write(1, &pn, 1);
	}
	else
	{
		pn = 'N';
		write(1, &pn, 1);
	}
}

//int	main(void)
//{
//	int	n;
//
//	n = -1000;
//	ft_is_negative(n);
//}
