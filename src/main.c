#include "printftest.h"

clock_t time1 = 0;
clock_t time2 = 0;
int		test = 0;
int		error = 0;
int		debug = 0;

int	main(int ac, char **av)
{
	int count;
	int max;

	cpt_stdout();
	count = 1;
	if (ac > 1)
	{
		if (!strcmp("-d", av[count]))
		{
			debug = 1;
			count++;
		}
		if (av[count] && isdigit(av[count][0]))
			max = atoi(av[count]);
		else
			max = 1;
	}
	else
		max = 1;
	count = 0;
	while (count++ < max)
	{
		//%d
		test_d(-2147483648);
		test_d(2147483647);
		test_d(-2147483648 - 1);
		test_d(-2147483648 - 15);
		test_d(1232);
		test_d(-100);
		test_d(-2);
		//%s
		char *s = malloc(sizeof(char) * 10000 + 1);
		memset(s, '*', 10000);
		test_s("abc\0efg");
		free(s);
		test_s("abc\0efg");
		test_s("abc");
		test_s("");
		test_s(NULL);
		test_s(0);
		//%p
		void *p = strdup("abc");
		test_p(p);
		free(p);
		test_p(ft_printf);
		test_p(NULL);
		test_p(0);
		//%f
		test_f(12313);
		test_f(0.0);
		test_f(0.00000000001);
		test_f(-0.00000000001);
		test_f(-1.0003333);
		test_f(1.00 / 3.00);
		//%c
		test_c(0);
		test_c('*');
		test_c('!');
		test_c(-55);
		//%x
		test_x(0);
		test_x(-1526);
		test_x(4294967295);
		test_x(4294967295 + 589);
		test_x(42);
		//%u
		test_d(1232);
		test_d(-100);
		test_d(-2);
		//%o
		test_x(0);
		test_x(42);
		test_x(-1526);
		test_x(4294967295);
		test_x(4294967295 + 589);
		//%Z
		test_Z();
		//other
		other_test();
		activita_test();
	}
	float t1 = ((float)time1)/CLOCKS_PER_SEC;
    float t2 = ((float)time2)/CLOCKS_PER_SEC;
	dprintf(2, "for %d tests:\n", test);
	dprintf(2, "[time] ft_printf = %f\n", t1);
	dprintf(2, "[time]    printf = %f\n", t2);
	dprintf(2, "[time]    %f\n", t1/t2);
	dprintf(2, "[time]    %f\n", (t2/t1) * 100);
	dprintf(2, "[error]   %d\n", error);
}
