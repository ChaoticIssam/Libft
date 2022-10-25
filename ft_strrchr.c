/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:42:58 by deimos            #+#    #+#             */
/*   Updated: 2022/10/15 13:59:17 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while(i >= 0)
    {
        if(s[i] == (char) c)
            return ((char *) &s[i]);
        i--;
    }
    if (!(char) c)
        return ((char *) &s[i]);
    return (0);
}