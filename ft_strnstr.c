/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:42:56 by deimos            #+#    #+#             */
/*   Updated: 2022/10/19 11:37:01 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  y;

    if (*needle == 0)
        return ((char *)haystack);
    if (len == 0)
        return (0);
    i = 0;
    y = ft_strlen(needle);
    while (haystack[i] && i < len)
    {
        if(haystack[i] == *needle && ft_strncmp(&haystack[i], needle, y) == 0 && len - i >= y)
            return ((char *) &haystack[i]);
        i++;
    }
    return (0);
}