#include "printftest.h"

int		out_pipe[2];

void	cpt_stdout(void)
{
	pipe(out_pipe);
	dup2(out_pipe[1], STDOUT_FILENO);
}

static void capture_unblock_fd(int fd)
{

	int flags = fcntl(fd, F_GETFL, 0);
	fcntl(fd, F_SETFL, flags | O_NONBLOCK);
}

char	*get_stdout(void)
{
	int		ret;
	char	buf[1025];

	fflush(stdout);
	capture_unblock_fd(out_pipe[0]);
	if ((ret = read(out_pipe[0], &buf, 1024)) <= 0)
		return (NULL);
	buf[ret] = 0;
	return (strdup(buf));
}
