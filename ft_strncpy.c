/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:22:55 by edorland          #+#    #+#             */
/*   Updated: 2016/07/11 11:30:59 by edorland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while (i != len)
	{
		if (i > ft_strlen(src))
		{
			dst[i] = '\0';
			i++;
		}
		else
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
