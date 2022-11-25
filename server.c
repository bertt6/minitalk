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

void	ft_handle(int sig)
{
	static int	a;
	static int	count;

	a <<= 1;
	if (sig == SIGUSR1)
		a |= 1;
	count++;
	if (count == 8)
	{
		write(1, &a, 1);
		count = 0;
	}
}

int	main(void)
{
	pid_t	a;

	a = getpid();
	ft_printf("%d\n", a);
	signal(SIGUSR1, ft_handle);
	signal(SIGUSR2, ft_handle);
	while (1)
		continue ;
}
