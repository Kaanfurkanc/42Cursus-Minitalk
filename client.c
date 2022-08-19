/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <kcakirog@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 06:54:40 by kcakirog          #+#    #+#             */
/*   Updated: 2022/08/18 20:25:20 by kcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "minitalk.h"

void	to_kill(int pid, char	*argv)
{
	int		i;
	int		x;
	char	c;
	char	*str;

	x = 0;
	str = argv;
	while (str[x])
	{
		c = str[x];
		x++;
		i = 8;
		while (i--)
		{
			if (c >> i & 1)
			{
				kill(pid, SIGUSR1);
			}
			else
				kill(pid, SIGUSR2);
			usleep(60);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		to_kill(ft_atoi(argv[1]), argv[2]);
	}
	return (0);
}
