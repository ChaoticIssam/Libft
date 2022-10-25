/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:13:14 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 17:13:15 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *p;
    size_t  s1_len;
    size_t  i;

    i = 0;
    s1_len = ft_strlen(s1);
    p = malloc(sizeof(char) *(s1_len + 1));
    if (!p)
        return (NULL);
    while (s1[i])
    {
        p[i] = s1[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}