/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:12:43 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 17:12:44 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_strrev(char *str)
{
	char	tmp;
	int		first;
	int		last;

	first = 0;
	last = ft_strlen(str) - 1;
	while (first < last)
	{
		tmp = str[first];
		str[first] = str[last];
		str[last] = tmp;
		first++;
		last--;
	}
	return (str);
}

static void	is_negative(int *n, unsigned int *nbr, size_t *sign)
{
	if (*n <= 0)
	{
		*nbr = -(*n);
		(*sign)++;
	}
}

char	*ft_itoa(int n)
{
	char			*number;
	size_t			i;
	size_t			sign;
	unsigned int	nbr;

	i = 0;
	sign = 0;
	nbr = n;
	is_negative(&n, &nbr, &sign);
	sign += number_len(n);
	number = malloc(sizeof(char) * (sign + 1));
	if (!number)
		return (NULL);
	if (n == 0)
		number[i++] = '0';
	while (nbr)
	{
		number[i] = (nbr % 10) + '0';
		nbr /= 10;
        i++;
	}
	if (n < 0)
		number[i++] = '-';
	number[i] = 0;
	return (ft_strrev(number));
}