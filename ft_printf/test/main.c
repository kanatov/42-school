#include "ft_printf.h"

int main(int n, char **args)
{
	int arr[] = {1,2,3};
	char str[] = "Words";
	int *ptr;

	printf("\n\n____________________\n\n");
	ft_printf("size: %d\n", ft_printf("all %d %corks%%!\n%s%c\n%p\n%p\n%p\n%p\n%p\n%p\n", -301, 'w', "and the text on the new line!\n", '%', NULL, arr, str, ptr, args, *args));
	printf("\nprintf\n");
	printf("%p\n%p\n%p\n%p\n%p\n%p\n", NULL, arr, str, ptr, args, *args);
	printf("\n\n____________________\n\n");

	return (0);
}

// DELETE <stdio.h> 