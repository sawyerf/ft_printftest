/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printftest.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeyret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:05:44 by apeyret           #+#    #+#             */
/*   Updated: 2018/12/10 14:10:34 by apeyret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFTEST_H
# define PRINTFTEST_H

# include <stdio.h>
# include <time.h>
# include "libft.h"

int		ft_printf(const char *s, ...);

void	pf_print_s(char *s, char *var);
void	pf_print_x(char *s, unsigned int var);
void	pf_print_c(char *s, char var);
void	pf_print_d(char *s, int var);
void	pf_print_p(char *s, void *var);
void	pf_print_f(char *s, float var);
void	pf_print_u(char *s, unsigned long var);
void	test_s(char *var);
void	test_x(unsigned int var);
void	test_c(char var);
void	test_d(int var);
void	test_p(void  *var);
void	test_f(float var);
void	test_u(unsigned long var);
#endif
