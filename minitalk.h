/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcakirog <kcakirog@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 06:54:55 by kcakirog          #+#    #+#             */
/*   Updated: 2022/08/18 20:24:40 by kcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_putchar(char c);
void	ft_putstr(char const *argv);
void	ft_putnbr_fd(int n, int fd);
void	send_signal(int sig);
void	to_kill(int pid, char *str);
void	which_signal(int signal);

#endif
