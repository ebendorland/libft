/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:35:36 by edorland          #+#    #+#             */
/*   Updated: 2016/07/11 11:03:25 by edorland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char	*d;
	int		i;
	
	i = 0;
	*d = malloc(ft_strlen(s) + 1);
	if (d = '\0')
		return ('\0');
	else
	{
		while (s[i] != '\0')
		{
			d[i] = s[i];
			i++;
		}
		return (*d);
	}
}
