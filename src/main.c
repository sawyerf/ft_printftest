#include "printftest.h"

#define BAR_SIZE 20
clock_t time1 = 0;
clock_t time2 = 0;
int		test = 0;
int		error = 0;
int		debug = 0;


char	*progress_bar(char *bar, int pourcent, int size)
{
	int c1;
	int c2;
	int ri;

	c1 = 0;
	ri = 0;
	if (pourcent)
		c1 = (pourcent * size) / 100;
	c2 = size - c1;
	while (c1)
	{
		strcpy(&bar[ri], "█");
		ri += 3;
		c1--;
	}
	if (c2)
	{
		memset(&bar[ri], ' ', c2);
		bar[ri + c2] = 0;
	}
	return (bar);
}

int	main(int ac, char **av)
{
	int	count;
	int	max;
	char	opt;

	cpt_stdout();
	count = 1;
	opt = 0;
	max = 1;
	if (ac > 1)
	{
		if (!strcmp("-d", av[count]))
		{
			debug = 1;
			count++;
		}
		if (av[count] && strlen(av[count]) == 1 && isalpha(av[count][0]))
		{
			opt = av[count][0];
			count++;
		}
		if (av[count] && isdigit(av[count][0]))
			max = atoi(av[count]);
	}
	count = 0;
	while (count++ < max)
	{
		//%d
		if (!opt || opt == 'd')
		{
			test_d(-2147483648);
			test_d(2147483647);
			test_d(4294967295);
			test_d(4294967295 + 589);
			test_d(-2147483648 - 1);
			test_d(-2147483648 - 15);
			test_d(1232);
			test_d(-100);
			test_d(-2);
			random_doux("d", 500);
		}
		//%s
		if (!opt || opt == 's')
		{
			char *s = malloc(sizeof(char) * 10000 + 1);
			memset(s, '*', 10000);
			test_s("abc\0efg");
			free(s);
			test_s("abc\0efg");
			test_s("abc");
			test_s("");
			test_s(NULL);
			test_s(0);
			random_s(500);
		}
		//%p
		if (!opt || opt == 'p')
		{
			void *p = strdup("abc");
			test_p(p);
			free(p);
			test_p(ft_printf);
			test_p(NULL);
			test_p(0);
		}
		//%f
		if (!opt || opt == 'f')
		{
			test_f(12313);
			test_f(0.0);
			test_f(0.00000000001);
			test_f(-0.00000000001);
			test_f(-1.0003333);
			test_f(1.00 / 3.00);
		}
		//%c
		if (!opt || opt == 'c')
		{
			test_c(0);
			test_c('*');
			test_c('!');
			test_c(-55);
			random_doux("c", 500);
		}
		//%x
		if (!opt || opt == 'x')
		{
			test_x(0);
			test_x(-1526);
			test_x(4294967295);
			test_x(4294967295 + 589);
			test_x(42);
			random_doux("x", 500);
		}
		//%u
		if (!opt || opt == 'u')
		{
			test_u(0);
			test_u(42);
			test_u(-1526);
			test_u(4294967295);
			test_u(4294967295 + 589);
			test_u(1232);
			test_u(-100);
			test_u(-2);
			random_doux("u", 500);
		}
		//%o
		if (!opt || opt == 'o')
		{
			test_o(0);
			test_o(42);
			test_o(-1526);
			test_o(4294967295);
			test_o(4294967295 + 589);
			random_doux("o", 500);
		}
		//%Z
		if (!opt || opt == 'Z')
		{
			test_Z();
		}
		//other
		if (!opt)
		{
			other_test();
			activita_test();
			antoineb_test();
		}
	}
	float t1 = ((float)time1)/CLOCKS_PER_SEC;
	float t2 = ((float)time2)/CLOCKS_PER_SEC;
	char bar[(BAR_SIZE + 1) * 3];

	dprintf(2, "for %d tests:\n", test);
	if (t1 >= t2)
	{
		dprintf(2, "[time] ft_printf = %fs  |%s| %.2f%\n", t1, progress_bar(bar, (t2 * 100) / t1, BAR_SIZE), (t2 * 100) / t1);
		dprintf(2, "[time]    printf = %fs  |%s| 100.00%\n", t2, progress_bar(bar, 100, 20));
	}
	else
	{
		dprintf(2, "[time] ft_printf = %fs  |%s| %.2f%\n", t1, progress_bar(bar, (int)((t2 * 100) / t1) % 100, BAR_SIZE), (t2 * 100) / t1);
		dprintf(2, "[time]    printf = %fs  |%s| 100.00%\n", t2, progress_bar(bar, 0, 20));
	}
	dprintf(2, "[time]    %9fx\n", t1/t2);
	dprintf(2, "[time]    %9f%\n", (t2/t1) * 100);
	dprintf(2, "[error]   %d\n", error);
}
