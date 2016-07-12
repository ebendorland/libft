/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 10:30:45 by edorland          #+#    #+#             */
/*   Updated: 2016/07/01 12:53:22 by edorland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)b;
	while (i != len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int	main()
{
	void	*str;

	str = "Hello there";
	ft_putstr(memset(str, '2', 3));


}
