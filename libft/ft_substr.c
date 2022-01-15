/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:12:50 by sfarina           #+#    #+#             */
/*   Updated: 2022/01/14 19:28:06 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	a;

	a = 0;
		s1 = malloc(sizeof (char) * len);
	if (s1 == NULL)
		return (NULL);
	while (a < len && s)
	{
		s1[a] = s[start];
		a++;
		start++;
	}
	return (s1);
}
