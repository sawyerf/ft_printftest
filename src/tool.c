#include <stdlib.h>

void	strdel(char **s)
{
	if (!s || !*s)
		return ;
	free(*s);
	*s = NULL;
}
