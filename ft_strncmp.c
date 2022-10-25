/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deimos <deimos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:42:53 by deimos            #+#    #+#             */
/*   Updated: 2022/10/10 20:42:55 by deimos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (!n)
        return (0);
    while (s1[i] == s2[i] && s2[i] && s1[i] && i < n)
        i++;
    if (i == n)
        return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
    // const char  *s1 = "a";
    // const char  *s2 = "A";

    printf("%d", ft_strncmp("abc", "", 5));
}*/