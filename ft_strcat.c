/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:33:28 by edorland          #+#    #+#             */
/*   Updated: 2016/07/11 12:54:00 by edorland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strcat(char *s1, const char *s2)
{
	char	*str;
	size_t	len;
	int		i;
	int		y;

	y = 0;
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc(len + 1);
	while (s1[y] != '\0')
	{
		str[i] = s1[y];
		i++;
		y++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		str[i] = s2[y];
		i++;
		y++;
	}
	str[len + 1] = '\0';
	s1 = str;
	return (s1);
}
