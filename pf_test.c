#include "printftest.h"
 
extern clock_t time1;
extern clock_t time2;
extern int		test;

void	test_d(int nb)
{
	pf_print_d("%d",		nb);
	pf_print_d("%+d",		nb);
	pf_print_d("%0+d",		nb);
	pf_print_d("%-d",		nb);
	pf_print_d("%0d",		nb);
	pf_print_d("%- .5d",	nb);
	pf_print_d("%- .5d",	nb);
	pf_print_d("% .2d",		nb);
	pf_print_d("%-5d", 		nb);
	pf_print_d("%2d", 		nb);
	pf_print_d("% 03d",		nb);
	pf_print_d("%-0.5d",	nb);
	pf_print_d("%0.5d",		nb);
	pf_print_d("%0.2d",		nb);
	pf_print_d("%-+10.5d",	nb);
	pf_print_d("% 5.5d",	nb);
	pf_print_d("% 5d",		nb);
	pf_print_d("%.d",		nb);
	pf_print_d("%0 +.d",	nb);
}

void	test_u(unsigned long u)
{
	pf_print_u("%u",		u);
	pf_print_u("%+u",		u);
	pf_print_u("%0+u",		u);
	pf_print_u("%-u",		u);
	pf_print_u("%0u",		u);
	pf_print_u("%.5u",		u);
	pf_print_u("%.2u",		u);
	pf_print_u("%5u",		u);
	pf_print_u("%2u",		u);
	pf_print_u("% 03u",		u);
	pf_print_u("%0.5u", 	u);
	pf_print_u("%0.2u", 	u);
	pf_print_u("%-+10.5u",	u);
	pf_print_u("% 5.5u",	u);
	pf_print_u("% 5u",		u);
	pf_print_u("%.u",		u);
	pf_print_u("%-10.5u",	u);
	pf_print_u("%-10.5u", 	u);
	pf_print_u("%08u", 		u);
	pf_print_u("%0.5u", 	u);
	pf_print_u("%0.2u", 	u);
	pf_print_u("%-+10.5u",	u);
	pf_print_u("% 5.5u", 	u);
	pf_print_u("% 5u", 		u);
}

void	test_p(void *addr)
{
	pf_print_p("%p",		addr);
	pf_print_p("%30p",		addr);
	pf_print_p("%30.30p",	addr);
	pf_print_p("%0-50p",	addr);
	pf_print_p("%# 0-50p",	addr);
	pf_print_p("%5.2p",		addr);
	pf_print_p("% -5p", 	addr);
	pf_print_p("%0 -5p", 	addr);
	pf_print_p("%0 -.5p",	addr);
}

void	test_f(float fl)
{
	pf_print_f("%f",		fl);
	pf_print_f("%+f",		fl);
	pf_print_f("%0+f",		fl);
	pf_print_f("%-f",		fl);
	pf_print_f("%0f",		fl);
	pf_print_f("%.5f",		fl);
	pf_print_f("%.2f",		fl);
	pf_print_f("%5f",		fl);
	pf_print_f("%2f",		fl);
	pf_print_f("% 03f",		fl);
	pf_print_f("%0.5f", 	fl);
	pf_print_f("%0.2f", 	fl);
	pf_print_f("%-+10.5f",	fl);
	pf_print_f("% 5.5f",	fl);
	pf_print_f("% 5f",		fl);
	pf_print_f("%.f",		fl);
	pf_print_f("%-10.5f",	fl);
	pf_print_f("%-10.5f", 	fl);
	pf_print_f("%08f", 		fl);
	pf_print_f("%0.5f", 	fl);
	pf_print_f("%0.2f", 	fl);
	pf_print_f("%-+10.5f",	fl);
	pf_print_f("% 5.5f", 	fl);
	pf_print_f("% 5f", 		fl);
	pf_print_f("%F",		fl);
	pf_print_f("%+F",		fl);
	pf_print_f("%0+F",		fl);
	pf_print_f("%-F",		fl);
	pf_print_f("%0F",		fl);
	pf_print_f("%.5F",		fl);
	pf_print_f("%.2F",		fl);
	pf_print_f("%5F",		fl);
	pf_print_f("%2F",		fl);
	pf_print_f("% 03F",		fl);
	pf_print_f("%0.5F", 	fl);
	pf_print_f("%0.2F", 	fl);
	pf_print_f("%-+10.5F",	fl);
	pf_print_f("% 5.5F",	fl);
	pf_print_f("% 5F",		fl);
	pf_print_f("%.F",		fl);
	pf_print_f("%-10.5F",	fl);
	pf_print_f("%-10.5F", 	fl);
	pf_print_f("%08F", 		fl);
	pf_print_f("%0.5F", 	fl);
	pf_print_f("%0.2F", 	fl);
	pf_print_f("%-+10.5F",	fl);
	pf_print_f("% 5.5F", 	fl);
	pf_print_f("% 5F", 		fl);
}

void	test_s(char *str){
	pf_print_s("%s",		str);
	pf_print_s("%.2s",		str);
	pf_print_s("%-15s",		str);
	pf_print_s("%5.2s",		str);
	pf_print_s("%2.2s",		str);
	pf_print_s("%.5s",		str);
	pf_print_s("%2s",		str);
	pf_print_s("%5s.",		str);
}

void	test_c(char c){
	pf_print_c("%c",		c);
	pf_print_c("%5c", 		c);
	pf_print_c("%-5c", 		c);
	pf_print_c("% 05c",		c);
	pf_print_c("% 5c", 		c);
	pf_print_c("%.5c", 		c);
}

void	test_x(unsigned int nb){
	pf_print_x("%x",		nb);
	pf_print_x("%5x",		nb);
	pf_print_x("%5.5x",		nb);
	pf_print_x("%-05.x",	nb);
	pf_print_x("%- 5.x",	nb);
	pf_print_x("%+ 5.x",	nb);
	pf_print_x("%+ .x",		nb);
	pf_print_x("%.x",		nb);
	pf_print_x("%X",		nb);
	pf_print_x("%5X",		nb);
	pf_print_x("%5.5X",		nb);
	pf_print_x("%-05.X",	nb);
	pf_print_x("%- 5.X",	nb);
	pf_print_x("%+ 5.X",	nb);
	pf_print_x("%+ .X",		nb);
	pf_print_x("%.X",		nb);
}
