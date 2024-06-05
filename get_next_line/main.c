#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *str;

	fd = open("short.txt", O_RDONLY);
	str = malloc(1);
	do
	{
		free(str);
		str = get_next_line(fd);
		printf(">%s<\n", str);
	} while (str);
	
	close(fd);
	return 1;
}
