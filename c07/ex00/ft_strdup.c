/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:50:39 by whendrik          #+#    #+#             */
/*   Updated: 2022/11/30 01:22:20 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	index;
	char	*dest;
	char	*d;

	index = 0;
	d = (dest = (char *)malloc(ft_strlen(src)* sizeof(char) + 1));
	if (d == NULL)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
int	main(void)
{
	char	*str;
	char	*allocated;

	str = "Fuckyou you dumb cunt why are you like this malloc ()";
	printf("original	: base	: $%s$ @ $%p\n", str, str);
	allocated = strdup(str);
	printf("copied	: alloc	: $%s$ @ $%p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copiedl	: alloc	: $%s$ @ $%p\n", allocated, allocated);
}
