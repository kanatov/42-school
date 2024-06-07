#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

void reader(char *name, int fd)
{
	printf("%s___________________\n", name);
	char *str;
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
}

int main()
{
	// reader("Fault", open("1.txt", O_RDONLY));
	reader("big", open("big.txt", O_RDONLY));
	reader("2kb", open("2kb.txt", O_RDONLY));
	// reader("space", open("space.txt", O_RDONLY));
	// reader("empty", open("empty.txt", O_RDONLY));
	// reader("nline", open("nline.txt", O_RDONLY));
	// reader("address", open("address.txt", O_RDONLY));
	
	return 1;
}
