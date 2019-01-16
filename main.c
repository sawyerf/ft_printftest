#include "printftest.h"

clock_t time1 = 0;
clock_t time2 = 0;
int		test = 0;
int		error = 0;

int	main(int ac, char **av)
{
	int count;
	int max;

	if (ac > 1)
		max = ft_atoi(av[1]);
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
		test_p(ft_strdup("abc"));
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
	}
	float t1 = ((float)time1)/CLOCKS_PER_SEC;
    float t2 = ((float)time2)/CLOCKS_PER_SEC;
	printf("for %d tests:\n", test);
	printf("[time] ft_printf = %f\n", t1);
	printf("[time]    printf = %f\n", t2);
	printf("[time]    %f\n", t1/t2);
	printf("[time]    %f\n", (t2/t1) * 100);
	printf("[error]   %d\n", error);
}
