/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:13:19 by deimos            #+#    #+#             */
/*   Updated: 2022/10/20 17:13:21 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *x;
    int i;
    int j;
    int s1_len;
    int s2_len;

    j = 0;
    i = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    x = malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (!x)
        return (0);
    while (s1[i])
    {
        x[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        x[i] = s2[j];
        i++;
        j++;
    }
    x[i] = '\0';
    return (x);
}