/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamli <bsamli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:54:06 by bsamli            #+#    #+#             */
/*   Updated: 2022/11/25 17:54:21 by bsamli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	f(char *str, int pid)
{
	int	i;
	int	c;

	i = 0;
	if (!str || str[i] == '\0')
	{
		return ;
	}
	while (str[i])
	{
		c = 7;
		while (c >= 0)
		{
			if ((str[i] >> c) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			c--;
			usleep(100);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc > 1)
	{
		pid = atoi(argv[1]);
		f(argv[2], pid);
	}
}
