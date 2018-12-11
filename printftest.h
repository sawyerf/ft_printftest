/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftest.h                                                             */
/*                                                    +:+ +:+         +:+     */
/*   By: apeyret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:05:44 by apeyret           #+#    #+#             */
/*   Updated: 2018/12/11 16:52:02 by Sawyerf                                  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFTEST_H
# define PRINTFTEST_H

# include <stdio.h>
# include <time.h>
# include "libft.h"

# define ADD_PRINTF(x, ...) \
	test++; \
	ft_printf("\x1b[0mft_printf: |"); \
	t = clock(); \
	lol = ft_printf(x, __VA_ARGS__); \
	time1 += clock() - t; \
	ft_printf("|\n"); \
	printf("   printf: |"); \
	t = clock(); \
	lol2 = printf(x, __VA_ARGS__); \
	time2 += clock() - t; \
	printf("|\n"); \
	if (lol != lol2) \
		ft_printf("\x1b[31m [ERROR] %s, %d != %d\x1b[0m\n", x, lol, lol2); \
	else \
		ft_printf("\x1b[32m [GOOD] %s\x1b[0m\n", x);

int		ft_printf(const char *s, ...);

void	test_s(char *var);
void	test_x(unsigned int var);
void	test_c(char var);
void	test_d(int var);
void	test_p(void  *var);
void	test_f(float var);
void	test_u(unsigned long var);
#endif
