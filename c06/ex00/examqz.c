/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examqz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:24:07 by whendrik          #+#    #+#             */
/*   Updated: 2022/11/24 23:56:03 by whendrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int	ac, char	**argv)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while(argv [0][i] != '\0')
		{
			if (argv [0][i] == 'a')
			{	
				write(1, "a\n", 2);
				return ('\n');
			}	
			i++;
		}
		write(1, "\n", 1);
	}
	return(0);
}
