#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *str;

	fd = open("short.txt", O_RDONLY);
	while (1){
		str = get_next_line(fd);
		if (str)
		{
			printf(">%s<\n", str);
			free(str);
		}
		else
			break;
			
	};
	
	close(fd);
	return 1;
}
