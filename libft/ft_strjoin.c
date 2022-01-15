/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:28:52 by sfarina           #+#    #+#             */
/*   Updated: 2022/01/14 19:43:11 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int s1len;
	int s2len;
	int	c;
	int	a;
	int s3len;

	c = 0;
	a = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3len = s1len + s2len;
	s3 = malloc((char)  (s3len));
	if (s3 == NULL)
	return (NULL);
	
	while (c < s1len)
	{
		s3[c] = s1[c];
		c++;
	}
	c = 0;
	while (a <s2len)
	{
		s3[c] = s2[a];
		a++;
		c++;
	}

	return(s3);
}
