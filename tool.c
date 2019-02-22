#include <stdlib.h>

void	ft_strdel(char **s)
{
	if (!s || !*s)
		return ;
	free(*s);
	*s = NULL;
}
