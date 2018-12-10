#include "printftest.h"

extern clock_t time1;
extern clock_t time2;
extern int		test;

void	error(char *s, int lol, int lol2)
{
	if (lol != lol2)
		ft_printf("\x1b[31m [ERROR] %s, %d != %d\x1b[0m\n", s, lol, lol2);
	else
		ft_printf("\x1b[32m [GOOD] %s\x1b[0m\n", s);
}

void	pf_print_s(char *s, char *var)
{
	int		lol;
	int		lol2;
	clock_t	t;
	
	test++;
	lol = 0;
	ft_printf("\x1b[0mft_printf: |");
	t = clock();
	lol = ft_printf(s, var);
	time1 += clock() - t;
	ft_printf("|\n");
	printf("   printf: |");
	t = clock();
	lol2 = printf(s, var);
	time2 += clock() - t;
	printf("|\n");
	error(s, lol, lol2);
}

void	pf_print_x(char *s, unsigned int var)
{
	int lol;
	int lol2;
	clock_t t;
	
	test++;
	lol = 0;
	ft_printf("\x1b[0mft_printf: |");
	t = clock();
	lol = ft_printf(s, var);
	time1 += clock() - t;
	ft_printf("|\n");
	printf("   printf: |");
	t = clock();
	lol2 = printf(s, var);
	time2 += clock() - t;
	printf("|\n");
	error(s, lol, lol2);
}

void	pf_print_c(char *s, char var)
{
	int lol;
	int lol2;
	clock_t t;
	
	test++;
	lol = 0;
	ft_printf("\x1b[0mft_printf: |");
	t = clock();
	lol = ft_printf(s, var);
	time1 += clock() - t;
	ft_printf("|\n");
	printf("   printf: |");
	t = clock();
	lol2 = printf(s, var);
	time2 += clock() - t;
	printf("|\n");
	error(s, lol, lol2);
}

void	pf_print_d(char *s, int var)
{
	int lol;
	int lol2;
	clock_t t;
	
	test++;
	lol = 0;
	ft_printf("\x1b[0mft_printf: |");
	t = clock();
	lol = ft_printf(s, var);
	time1 += clock() - t;
	ft_printf("|\n");
	printf("   printf: |");
	t = clock();
	lol2 = printf(s, var);
	time2 += clock() - t;
	printf("|\n");
	error(s, lol, lol2);
}

void	pf_print_p(char *s,void *var)
{
	int lol;
	int lol2;
	clock_t t;
	
	test++;
	lol = 0;
	ft_printf("\x1b[0mft_printf: |");
	t = clock();
	lol = ft_printf(s, var);
	time1 += clock() - t;
	ft_printf("|\n");
	printf("   printf: |");
	t = clock();
	lol2 = printf(s, var);
	time2 += clock() - t;
	printf("|\n");
	error(s, lol, lol2);
}

void	pf_print_f(char *s, float var)
{
	int lol;
	int lol2;
	clock_t t;
	
	test++;
	lol = 0;
	ft_printf("\x1b[0mft_printf: |");
	t = clock();
	lol = ft_printf(s, var);
	time1 += clock() - t;
	ft_printf("|\n");
	printf("   printf: |");
	t = clock();
	lol2 = printf(s, var);
	time2 += clock() - t;
	printf("|\n");
	error(s, lol, lol2);
}

void	pf_print_u(char *s, unsigned long var)
{
	int lol;
	int lol2;
	clock_t t;
	
	test++;
	lol = 0;
	ft_printf("\x1b[0mft_printf: |");
	t = clock();
	lol = ft_printf(s, var);
	time1 += clock() - t;
	ft_printf("|\n");
	printf("   printf: |");
	t = clock();
	lol2 = printf(s, var);
	time2 += clock() - t;
	printf("|\n");
	error(s, lol, lol2);
}
