/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 12:47:54 by edorland          #+#    #+#             */
/*   Updated: 2016/07/11 14:14:19 by edorland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_strlen(const char *s);

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;
	size_t	len;
	int		i;
	int		y;

	i = 0;
	y = 0;
	len = ft_strlen(s1) + n;
	str = (char*)malloc(len + 1);
	while (s1[y] != '\0')
	{
		str[i] = s1[y];
		i++;
		y++;
	}
	y = 0;
	while (y != n)
	{
		str[i] = s2[y];
		i++;
		y++;
	}
	str[len + 1] = '\0';
	s1 = str;
	return (s1);
}
