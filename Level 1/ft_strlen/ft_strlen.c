/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:05:47 by emohamed          #+#    #+#             */
/*   Updated: 2023/01/10 09:09:12 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}
	return i;
}
// int main()
// {
// 	char *str = "4mine";
// 	printf("%d", ft_strlen(str));
// }