/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 01:14:36 by emohamed          #+#    #+#             */
/*   Updated: 2023/01/11 01:19:47 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int ac, char **av)
{
	{
	int i = 0;
	if ( ac == 2)
	{
		while(av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <'z')|| (av[1][i] >= 'A' && av[1][i] < 'Z'))
				av[1][i] = av[1][i] +1;
			else if ((av[1][i] == 'z') || (av[1][i] =='Z'))
				av[1][i] = av[1][i] -25;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
}