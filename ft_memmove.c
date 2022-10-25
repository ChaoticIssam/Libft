/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:12:53 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 17:12:54 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *d;
    char    *s;
    
    d = (char *) dst;
    s = (char *) src;
    if (dst == 0 && src == 0)
        return (0);
    if (dst < src)
        ft_memcpy(dst, src, len);
    else
    {
        while (len--)
            d[len] = s[len];
    }
    return (dst);
}