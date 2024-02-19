/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:32:38 by whendrik          #+#    #+#             */
/*   Updated: 2022/11/24 22:32:52 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	main(int	argc, char	**argv)
{
	int i;

	i = 0;
	while(argv [0][i] != '\0' && argc)
	{
		ft_putchar(argv [0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
