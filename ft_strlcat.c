/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:42:43 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 16:09:07 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t z;

    if (dstsize == 0)
        return (ft_strlen(src));
    else if (dstsize < ft_strlen(dst))
        z = ft_strlen(src) + dstsize;
    else
        z = ft_strlen(src) + ft_strlen(dst);
    i = 0;
    j = ft_strlen(dst);
    if (dstsize == 0)
        return (ft_strlen(src));
    while (src[i] && j < dstsize - 1)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    return (z);
}