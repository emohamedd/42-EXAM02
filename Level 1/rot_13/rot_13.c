/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 00:42:54 by emohamed          #+#    #+#             */
/*   Updated: 2023/01/11 01:15:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if ( ac == 2)
	{
		while(av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'm')|| (av[1][i] >= 'A' && av[1][i] <= 'M'))
				av[1][i] = av[1][i] +13;
			else if ((av[1][i] >= 'n' && av[1][i] <= 'z')|| (av[1][i] >= 'N' && av[1][i] <= 'Z'))
				av[1][i] = av[1][i] -13;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}