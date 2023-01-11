/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 08:47:31 by emohamed          #+#    #+#             */
/*   Updated: 2023/01/10 09:04:21 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}
// int main()
// {
// 	char s1[6];
// 	char s2[6] = "4mine";
// 	printf("%s\n", ft_strcpy(s1, s2));
// 	printf("%s", strcpy(s1, s2));
// }