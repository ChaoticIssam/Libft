/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:13:31 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 17:13:32 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  Iset(char c, const char *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    int first;
    int last;

    if (!s1)
        return (0);
    first = 0;
    last = ft_strlen(s1) - 1;
    while (s1[first] && Iset(s1[first], set))
        first++;
    while (s1[last] && Iset(s1[last], set))
        last--;
    if (last == -1)
        return (ft_substr(s1, first, 0));
    return (ft_substr(s1, first, (last - first + 1)));
}