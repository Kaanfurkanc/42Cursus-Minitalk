/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <kcakirog@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 06:54:26 by kcakirog          #+#    #+#             */
/*   Updated: 2022/08/18 20:32:29 by kcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>

void	send_signal(int sig)
{
	static int	i = 7;
	static char	c = 0;

	c += sig << i;
	if (i == 0)
	{
		i = 7;
		ft_putchar(c);
		c = 0;
	}
	else
		i--;
}

void	which_signal(int signal)
{
	if (signal == SIGUSR1)
		send_signal(1);
	if (signal == SIGUSR2)
		send_signal(0);
}

int	main(void)
{
	ft_putstr("Process id : \n");
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	signal(SIGUSR1, which_signal);
	signal(SIGUSR2, which_signal);
	while (42)
	{
		pause();
	}
	return (0);
}
