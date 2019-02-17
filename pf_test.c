#include "printftest.h"
 
extern clock_t time1;
extern clock_t time2;
extern int		test;
extern int		error;
char			*str;
char			*str2;

void	test_d(int nb)
{
	int		ret;
	int		ret2;
	clock_t	t;
	
	ADD_PRINTF("%d",		nb);
	ADD_PRINTF("%+d",		nb);
	ADD_PRINTF("%0+d",		nb);
	ADD_PRINTF("%-d",		nb);
	ADD_PRINTF("%0d",		nb);
	ADD_PRINTF("%- .5d",	nb);
	ADD_PRINTF("%- .5d",	nb);
	ADD_PRINTF("% .2d",		nb);
	ADD_PRINTF("%-5d", 		nb);
	ADD_PRINTF("%2d", 		nb);
	ADD_PRINTF("% 03d",		nb);
	ADD_PRINTF("%-0.5d",	nb);
	ADD_PRINTF("%0.5d",		nb);
	ADD_PRINTF("%0.2d",		nb);
	ADD_PRINTF("%-+10.5d",	nb);
	ADD_PRINTF("% 5.5d",	nb);
	ADD_PRINTF("% 5d",		nb);
	ADD_PRINTF("%.d",		nb);
	ADD_PRINTF("%0 +.d",	nb);
}

void	test_u(unsigned long u)
{
	int		ret;
	int		ret2;
	clock_t	t;
	
	ADD_PRINTF("%u",		u);
	ADD_PRINTF("%+u",		u);
	ADD_PRINTF("%0+u",		u);
	ADD_PRINTF("%-u",		u);
	ADD_PRINTF("%0u",		u);
	ADD_PRINTF("%.5u",		u);
	ADD_PRINTF("%.2u",		u);
	ADD_PRINTF("%5u",		u);
	ADD_PRINTF("%2u",		u);
	ADD_PRINTF("% 03u",		u);
	ADD_PRINTF("%0.5u", 	u);
	ADD_PRINTF("%0.2u", 	u);
	ADD_PRINTF("%-+10.5u",	u);
	ADD_PRINTF("% 5.5u",	u);
	ADD_PRINTF("% 5u",		u);
	ADD_PRINTF("%.u",		u);
	ADD_PRINTF("%-10.5u",	u);
	ADD_PRINTF("%-10.5u", 	u);
	ADD_PRINTF("%08u", 		u);
	ADD_PRINTF("%0.5u", 	u);
	ADD_PRINTF("%0.2u", 	u);
	ADD_PRINTF("%-+10.5u",	u);
	ADD_PRINTF("% 5.5u", 	u);
	ADD_PRINTF("% 5u", 		u);
}

void	test_p(void *addr)
{
	int		ret;
	int		ret2;
	clock_t	t;
	
	ADD_PRINTF("%p",		addr);
	ADD_PRINTF("%30p",		addr);
	ADD_PRINTF("%30.30p",	addr);
	ADD_PRINTF("%0-50p",	addr);
	ADD_PRINTF("%# 0-50p",	addr);
	ADD_PRINTF("%5.2p",		addr);
	ADD_PRINTF("% -5p", 	addr);
	ADD_PRINTF("%0 -5p", 	addr);
	ADD_PRINTF("%0 -.5p",	addr);
}

void	test_f(float fl)
{
	int		ret;
	int		ret2;
	clock_t	t;
	
	ADD_PRINTF("%f",		fl);
	ADD_PRINTF("%+f",		fl);
	ADD_PRINTF("%0+f",		fl);
	ADD_PRINTF("%-f",		fl);
	ADD_PRINTF("%0f",		fl);
	ADD_PRINTF("%.5f",		fl);
	ADD_PRINTF("%.2f",		fl);
	ADD_PRINTF("%5f",		fl);
	ADD_PRINTF("%2f",		fl);
	ADD_PRINTF("% 03f",		fl);
	ADD_PRINTF("%0.5f", 	fl);
	ADD_PRINTF("%0.2f", 	fl);
	ADD_PRINTF("%-+10.5f",	fl);
	ADD_PRINTF("% 5.5f",	fl);
	ADD_PRINTF("% 5f",		fl);
	ADD_PRINTF("%.f",		fl);
	ADD_PRINTF("%-10.5f",	fl);
	ADD_PRINTF("%-10.5f", 	fl);
	ADD_PRINTF("%08f", 		fl);
	ADD_PRINTF("%0.5f", 	fl);
	ADD_PRINTF("%0.2f", 	fl);
	ADD_PRINTF("%-+10.5f",	fl);
	ADD_PRINTF("% 5.5f", 	fl);
	ADD_PRINTF("% 5f", 		fl);
	ADD_PRINTF("%F",		fl);
	ADD_PRINTF("%+F",		fl);
	ADD_PRINTF("%0+F",		fl);
	ADD_PRINTF("%-F",		fl);
	ADD_PRINTF("%0F",		fl);
	ADD_PRINTF("%.5F",		fl);
	ADD_PRINTF("%.2F",		fl);
	ADD_PRINTF("%5F",		fl);
	ADD_PRINTF("%2F",		fl);
	ADD_PRINTF("% 03F",		fl);
	ADD_PRINTF("%0.5F", 	fl);
	ADD_PRINTF("%0.2F", 	fl);
	ADD_PRINTF("%-+10.5F",	fl);
	ADD_PRINTF("% 5.5F",	fl);
	ADD_PRINTF("% 5F",		fl);
	ADD_PRINTF("%.F",		fl);
	ADD_PRINTF("%-10.5F",	fl);
	ADD_PRINTF("%-10.5F", 	fl);
	ADD_PRINTF("%08F", 		fl);
	ADD_PRINTF("%0.5F", 	fl);
	ADD_PRINTF("%0.2F", 	fl);
	ADD_PRINTF("%-+10.5F",	fl);
	ADD_PRINTF("% 5.5F", 	fl);
	ADD_PRINTF("% 5F", 		fl);
}

void	test_s(char *str){
	int		ret;
	int		ret2;
	clock_t	t;
	
	ADD_PRINTF("%s",		str);
	ADD_PRINTF("%.2s",		str);
	ADD_PRINTF("%-15s",		str);
	ADD_PRINTF("%5.2s",		str);
	ADD_PRINTF("%2.2s",		str);
	ADD_PRINTF("%.5s",		str);
	ADD_PRINTF("%2s",		str);
	ADD_PRINTF("%5s",		str);
}

void	test_c(char c){
	int		ret;
	int		ret2;
	clock_t	t;
	
	ADD_PRINTF("%c",		c);
	ADD_PRINTF("%5c", 		c);
	ADD_PRINTF("%-5c", 		c);
	ADD_PRINTF("% 05c",		c);
	ADD_PRINTF("% 5c", 		c);
	ADD_PRINTF("%.5c", 		c);
}

void	test_x(unsigned int nb){
	int		ret;
	int		ret2;
	clock_t	t;
	
	ADD_PRINTF("%x",		nb);
	ADD_PRINTF("%5x",		nb);
	ADD_PRINTF("%5.5x",		nb);
	ADD_PRINTF("%-05.x",	nb);
	ADD_PRINTF("%- 5.x",	nb);
	ADD_PRINTF("%+ 5.x",	nb);
	ADD_PRINTF("%+ .x",		nb);
	ADD_PRINTF("%.x",		nb);
	ADD_PRINTF("%X",		nb);
	ADD_PRINTF("%5X",		nb);
	ADD_PRINTF("%5.5X",		nb);
	ADD_PRINTF("%-05.X",	nb);
	ADD_PRINTF("%- 5.X",	nb);
	ADD_PRINTF("%+ 5.X",	nb);
	ADD_PRINTF("%+ .X",		nb);
	ADD_PRINTF("%.X",		nb);
}
