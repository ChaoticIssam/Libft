/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:13:35 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 17:13:36 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *c;
    size_t  i;
    size_t  y;

    i = 0;
    y = ft_strlen(s);
    if (len > y - start)
        len = y - start;
    c = malloc (sizeof(char) * (len + 1));
    if (!c)
        return (0);
    if (start > y)
    {
        c[i] = '\0';
        return (c);
    }
    while (s[start] && i < len)
    {
        c[i] = s[start];
        i++;
        start++;
    }
    c[i] = '\0';
    return (c);
}