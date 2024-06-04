#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *str;

	fd = open("nline.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%p\n>%s<\n", str, str);
	while (str)
	{
		free(str);
		str = get_next_line(fd);
		printf("%p\n>%s<\n", str, str);
	}
	return 1;
}
