#ifndef PRINTFTEST_H
# define PRINTFTEST_H

# include <stdio.h>
# include <time.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

# define ADD_PRINTF(x, ...) \
	if (debug) \
		dprintf(2, "\x1b[32m [START] %s\x1b[0m\n", x); \
	ret = 0; \
	ret2 = 0; \
	test++; \
	t = clock(); \
	ret = ft_printf(x, ##__VA_ARGS__); \
	time1 += clock() - t; \
	str = get_stdout(); \
	t = clock(); \
	ret2 = printf(x, ##__VA_ARGS__); \
	time2 += clock() - t; \
	str2 = get_stdout(); \
	if (ret != ret2 || (str && str2 && strcmp(str, str2))) \
	{ \
		error++; \
		dprintf(2, "\x1b[0mft_printf: |%s|\n", str); \
		dprintf(2, "   printf: |%s|\n", str2); \
		if (ret != ret2) \
			dprintf(2, "\x1b[31m [ERROR] %s, %d != %d\x1b[0m\n", x, ret, ret2); \
		else \
			dprintf(2, "\x1b[31m [ERROR] %s\x1b[0m\n", x); \
	} \
	strdel(&str); \
	strdel(&str2);

int		ft_printf(const char *s, ...);

void	test_s(char *var);
void	test_x(unsigned int var);
void	test_c(char var);
void	test_d(int var);
void	test_p(void  *var);
void	test_f(float var);
void	test_u(unsigned long var);
void	test_o(unsigned long var);
void	test_Z(void);
void	other_test(void);
void	activita_test(void);
void	antoineb_test(void);
void	random_doux(char *typ, int i);
void	random_s(int i);

void	cpt_stdout(void);
char	*get_stdout(void);

void	strdel(char	**s);
char	*argGenerator(char *typ);
char	*stringGenerator(int i);
#endif
