#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *str;

	fd = open("nline.txt", O_RDONLY);
	str = get_next_line(fd);
	while (str && *str)
	{
		printf(">%s<\n", str);
		free(str);
		str = get_next_line(fd);
	}
	return 1;
}