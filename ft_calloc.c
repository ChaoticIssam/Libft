/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:12:33 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 17:12:34 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *loc;

    if (size && count > SIZE_MAX / size)
        return (0);
    loc = malloc(size * count);
    if (!loc)
        return (0);
    ft_bzero(loc, size * count);
    return (loc);
}