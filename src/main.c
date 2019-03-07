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
		test_d(1232);
		test_d(-100);
		test_d(-2);
		//%s
		test_s("abc");
		test_s("");
		test_s(NULL);
		//%p
		test_p(strdup("abc"));
		test_p(ft_printf);
		test_p(NULL);
		test_p(0);
		//%f
		test_f(12313);
		test_f(0.0);
		test_f(0.00000000001);
		test_f(-0.00000000001);
		test_f(-1);
		//%c
		test_c(42);
		test_c(0);
		//%x
		test_x(42);
		test_x(0);
		test_x(-1526);
		//%u
		test_d(1232);
		test_d(-100);
		test_d(-2);
		//%Z
		test_Z();
		lot_test();
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
