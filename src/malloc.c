#include <stdlib.h>

void		*malloc(size_t i)
{
	unsigned int r = rand();

	if (!(r % 100))
	{
		write(2, "malloc fail\n", 13);
		return (NULL);
	}
	return (valloc(i));
}
