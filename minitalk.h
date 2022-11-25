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

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_handle(int sig);
void	f(char *str, int pid);
int		ft_printf(const char *s, ...);
void	ft_check(va_list *list, char a, int *result);
void	ft_putnbr(int n, int *result);
void	ft_putstr(char *s, int *result);
void	ft_putchar(char c, int *result);
int		ft_atoi(const char *str);

#endif
