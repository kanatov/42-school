#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

char uppercase(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ft_tolower(c);
	else
		return ft_toupper(c);
}

void uppercase_ptr(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_tolower(*c);
	else
		*c = ft_toupper(*c);
}

int main()
{
	printf("_______________________________\n\n");
	printf("isalpha\n");
	printf("65:			%d, %d\n", ft_isalpha(65), isalpha(65));
	printf("42:			%d, %d\n", ft_isalpha(42), isalpha(42));
	printf("A:			%d, %d\n", ft_isalpha('A'), isalpha('A'));
	printf("z:			%d, %d\n", ft_isalpha('z'), isalpha('z'));
	printf("Z:			%d, %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("a:			%d, %d\n", ft_isalpha('a'), isalpha('a'));
	printf("-:			%d, %d\n", ft_isalpha('-'), isalpha('-'));
	printf(" :			%d, %d\n", ft_isalpha(' '), isalpha(' '));
	printf("\\0:			%d, %d\n", ft_isalpha('\0'), isalpha('\0'));
	printf("char a:			%d, %d\n", ft_isalpha((char)'a'), isalpha((char)'a'));
	printf("unsigned char a:	%d, %d\n", ft_isalpha((unsigned char)'a'), isalpha((unsigned char)'a'));

	printf("\n\nisdigit\n");
	printf("65:			%d, %d\n", ft_isdigit(65), isdigit(65));
	printf("42:			%d, %d\n", ft_isdigit(42), isdigit(42));
	printf("a:			%d, %d\n", ft_isdigit('0'), isdigit('0'));
	printf("-:			%d, %d\n", ft_isdigit('-'), isdigit('-'));
	printf(" :			%d, %d\n", ft_isdigit(' '), isdigit(' '));
	printf("\\0:			%d, %d\n", ft_isdigit('\0'), isdigit('\0'));
	printf("char a:			%d, %d\n", ft_isdigit((char)'9'), isdigit((char)'9'));
	printf("unsigned char a:	%d, %d\n", ft_isdigit((unsigned char)'9'), isdigit((unsigned char)'9'));

	printf("\n\nisalnum\n");
	printf("9:	%d, %d\n", ft_isalnum('9'), isalnum('9'));
	printf("a:	%d, %d\n", ft_isalnum('a'), isalnum('a'));
	printf("-:	%d, %d\n", ft_isalnum('-'), isalnum('-'));
	printf("\\0:	%d, %d\n", ft_isalnum('\0'), isalnum('\0'));

	printf("\n\nisprint\n");
	printf("9:	%d, %d\n", ft_isprint('9'), isprint('9'));
	printf("-:	%d, %d\n", ft_isprint('-'), isprint('-'));
	printf("a:	%d, %d\n", ft_isprint('a'), isprint('a'));
	printf("\\0:	%d, %d\n", ft_isprint('\0'), isprint('\0'));
	printf("\\t:	%d, %d\n", ft_isprint('\t'), isprint('\t'));

	printf("\n\nstrlen\n");
	printf("9:	%zu, %zu\n", ft_strlen("9"), strlen("9"));
	printf("hello fellow stranger:	%zu, %zu\n", ft_strlen("hello fellow stranger"), strlen("hello fellow stranger"));
	printf("967890 282:	%zu, %zu\n", ft_strlen("967890 282"), strlen("967890 282"));
	printf("\\0:	%zu, %zu\n", ft_strlen("\0"), strlen("\0"));
	printf("\\t:	%zu, %zu\n", ft_strlen("\t"), strlen("\t"));
	printf(" :	%zu, %zu\n", ft_strlen(""), strlen(""));
	printf("1kb:	%zu, %zu\n", ft_strlen("GxOIPX80VFPuIaLTvOPiQP95x70SvrJVfgPqwUrIgQkjeNV9OFmU5RH62VHmIRRL0Gyp2EHGdZoPKVX2mQ7qat7XsL8fbNruBeEGeiyQfhnpeSGDiI7RcEuOpp86txzzInPbMA3C0Qmxkiv9diGcAGKorlCE6cNZMSVrS70F45yzQrGqbcYB6u0ixOECSVHSIWcRYrNql1qTfPjgDBHU6XCIshgvjLwAlmiRF1Ktg9VYVhqgZRhZUAq5Xfsu0j13fZegZT1puJNzYegFEi6qYDm8yWBlhuHvKDfYOsHbQowdsD6oHDWG2ciiIsaRyJPoaYqbXI4nhm3SULuTk4pNLHC0fUTI96Fd90jgrbUHgTgfHVBdbFQW04JewkBOn1fAtUgNe7vB7FrGSbV4mQ9rar1niMJ2USwK3Mr2tf654DGa3kAHkFwmoqF5r95sKIrfRHsD6i4W39P7cWPVXGefCvRS4oZ2MA5DxFwo61XpCFbGs9yreYH31stoe5CRXU6NwwaXuyxXHeUfNPEZNPOQWiWni03w3uIbfm67QnlF7ncrNcTAjLVpx3c6jcMs7cfqrDKUEF4yDJzV2zy94XkMv3WVqsWW28II7qdAQKjMvPFdwbWN8kAwd5JCinKgfZsKeadZ1BjsDzNOJ7RX3DPMIILnltqM6uiXmZS94KYk6gq0PnnWVa5fOyNodDWRcZI3cX68eaSqCfnq67263hn108Tf4MzJ60i3Z9Tu9lRrQoQgc1gE0SwSBR6bgI9jmS4Qb08QsRLWbpfIHSe2QES6O7ahi0iU3i46cQO0cqklKyny0vbipVqrBlKZMZQ1z2AfzO20uC8tGlfJIjQ5NHn9ZLRUlKpRLXe9FlnD2LqMRlDUDiHnZz1iwd34O8gCjVCEJst5X9RCeA2lRMIwos1USwt2ufPHRrkWbM3jmR0LoaxIs9Sa5GGFD3qitetgsD9fPCPgJymKnWhk7G8ONgNBGGcrQiVtmp9Ln0XoDRtzZtR8pmNCQiFyQBmsDKPflEYz"), strlen("GxOIPX80VFPuIaLTvOPiQP95x70SvrJVfgPqwUrIgQkjeNV9OFmU5RH62VHmIRRL0Gyp2EHGdZoPKVX2mQ7qat7XsL8fbNruBeEGeiyQfhnpeSGDiI7RcEuOpp86txzzInPbMA3C0Qmxkiv9diGcAGKorlCE6cNZMSVrS70F45yzQrGqbcYB6u0ixOECSVHSIWcRYrNql1qTfPjgDBHU6XCIshgvjLwAlmiRF1Ktg9VYVhqgZRhZUAq5Xfsu0j13fZegZT1puJNzYegFEi6qYDm8yWBlhuHvKDfYOsHbQowdsD6oHDWG2ciiIsaRyJPoaYqbXI4nhm3SULuTk4pNLHC0fUTI96Fd90jgrbUHgTgfHVBdbFQW04JewkBOn1fAtUgNe7vB7FrGSbV4mQ9rar1niMJ2USwK3Mr2tf654DGa3kAHkFwmoqF5r95sKIrfRHsD6i4W39P7cWPVXGefCvRS4oZ2MA5DxFwo61XpCFbGs9yreYH31stoe5CRXU6NwwaXuyxXHeUfNPEZNPOQWiWni03w3uIbfm67QnlF7ncrNcTAjLVpx3c6jcMs7cfqrDKUEF4yDJzV2zy94XkMv3WVqsWW28II7qdAQKjMvPFdwbWN8kAwd5JCinKgfZsKeadZ1BjsDzNOJ7RX3DPMIILnltqM6uiXmZS94KYk6gq0PnnWVa5fOyNodDWRcZI3cX68eaSqCfnq67263hn108Tf4MzJ60i3Z9Tu9lRrQoQgc1gE0SwSBR6bgI9jmS4Qb08QsRLWbpfIHSe2QES6O7ahi0iU3i46cQO0cqklKyny0vbipVqrBlKZMZQ1z2AfzO20uC8tGlfJIjQ5NHn9ZLRUlKpRLXe9FlnD2LqMRlDUDiHnZz1iwd34O8gCjVCEJst5X9RCeA2lRMIwos1USwt2ufPHRrkWbM3jmR0LoaxIs9Sa5GGFD3qitetgsD9fPCPgJymKnWhk7G8ONgNBGGcrQiVtmp9Ln0XoDRtzZtR8pmNCQiFyQBmsDKPflEYz"));
	// log off  :)
	printf("\n\nmemset\n");
	int memset_10 = 10;
	int memset_0 = 0;
	char array1[memset_10];
	char array2[memset_10];
	printf("array, 'b', 0:	%p, %p\n", ft_memset(array1, 'b', memset_0), memset(array2, 'b', memset_0));
	printf("array, 'a', 10:	%p, %p\n", ft_memset(array1, 'a', memset_10), memset(array2, 'a', memset_10));
	printf("ft, 'null', 10:	%p\n", ft_memset((char *)NULL, 'a', memset_10));
	// printf("os, 'null', 10:	%p\n", memset((char *)NULL, 'a', memset_10));
	printf("ft, 'null', 10:	%p\n", ft_memset(array1, 'a', (size_t)NULL));
	printf("os, 'null', 10:	%p\n", memset(array1, 'a', (size_t)NULL));
	printf("ft, 'null', 10:	%p\n", ft_memset((char *)NULL, 'a', (size_t)NULL));
	printf("os, 'null', 10:	%p\n", memset((char *)NULL, 'a', (size_t)NULL));
	printf("\nft_memset, memeset ");
	int i = 0;
	while (i < memset_10)
	{
		printf("%c, %c\n", array1[i], array2[i]);
		i++;
	}
	printf("\n\nbzero\n");
	ft_bzero(array1, memset_10 / 2);
	bzero(array2, memset_10 / 2);
	i = 0;
	while (i < memset_10)
	{
		printf("%c, %c\n", array1[i], array2[i]);
		printf("%lu, %lu\n", sizeof(array1[i]), sizeof(array2[i]));
		i++;
	}
	printf("\n\nmemcpy\n");
	int memcpy_5 = 5;
	int int_arr_src1[] = {5, 10, -2147483648, 2147483647, 0};
	int int_arr_dst1[memcpy_5];
	int int_arr_dst2[memcpy_5];
	memcpy(int_arr_dst1, int_arr_src1, sizeof(int) * memcpy_5);
	ft_memcpy(int_arr_dst2, int_arr_src1, sizeof(int) * memcpy_5);

	char char_arr_src1[] = "Sup!";
	char char_arr_dst1[memcpy_5];
	char char_arr_dst2[memcpy_5];
	memcpy(char_arr_dst1, char_arr_src1, ft_strlen(char_arr_src1));
	ft_memcpy(char_arr_dst2, char_arr_src1, ft_strlen(char_arr_src1));

	int memcpy_src1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memcpy_src2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memcpy_src3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memcpy_src4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	memcpy(memcpy_src1 + 3, memcpy_src1, sizeof(int) * 7);
	ft_memcpy(memcpy_src2 + 3, memcpy_src2, sizeof(int) * 7);
	memcpy(memcpy_src3, memcpy_src3 + 3, sizeof(int) * 7);
	ft_memcpy(memcpy_src4, memcpy_src4 + 3, sizeof(int) * 7);

	i = 0;
	while (i < memcpy_5)
	{
		printf("%d, %d\n", int_arr_dst1[i], int_arr_dst2[i]);
		i++;
	}
	i = 0;
	while (i < memcpy_5)
	{
		printf("%c, %c\n", char_arr_dst1[i], char_arr_dst2[i]);
		i++;
	}
	printf("\nmemcpy_src1\n");
	i = 0;
	while (i < 10)
	{
		printf("%d, %d\n", memcpy_src1[i], memcpy_src2[i]);
		i++;
	}
	printf("\nmemcpy_src3\n");
	i = 0;
	while (i < 10)
	{
		printf("%d, %d\n", memcpy_src3[i], memcpy_src4[i]);
		i++;
	}

	printf("\n\nmemmove\n");
	int memmove_src1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memmove_src2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memmove_src3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memmove_src4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memmove_src5[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int memmove_src6[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	memmove(memmove_src1 + 3, memmove_src1, sizeof(int) * 7);
	ft_memmove(memmove_src2 + 3, memmove_src2, sizeof(int) * 7);
	i = 0;
	while (i < 10)
	{
		printf("%d %d\n", memmove_src1[i], memmove_src2[i]);
		i++;
	}
	printf("\n");
	memmove(memmove_src3, memmove_src3 + 3, sizeof(int) * 7);
	ft_memmove(memmove_src4, memmove_src4 + 3, sizeof(int) * 7);
	i = 0;
	while (i < 10)
	{
		printf("%d %d\n", memmove_src3[i], memmove_src4[i]);
		i++;
	}
	printf("\n");
	memmove(memmove_src5, memmove_src5, sizeof(int) * 10);
	ft_memmove(memmove_src6, memmove_src6, sizeof(int) * 10);
	i = 0;
	while (i < 10)
	{
		printf("%d %d\n", memmove_src5[i], memmove_src6[i]);
		i++;
	}
	printf("\n");

	char b_1[10];
	char b_2[] = "Hello!";
	int b_3[] = {4, 5, 7, 8, 0, 0, 0, 0, 1};
	char b_4[20] = "Hello!";
	int b_5[20] = {4, 5, 7, 8, 0, 0, 0, 0, 1};
	printf("%lu\n", sizeof(b_1));
	printf("%lu\n", sizeof(b_2));
	printf("%lu\n", sizeof(b_3));
	printf("%lu\n", sizeof(b_4));
	printf("%lu\n", sizeof(b_5));
	printf("\n");

	printf("\n\nft_strlcpy\n");

	char b_10[10];
	char b_2_10[10];
	char b_0[0];
	printf("%zu, >%s<\n", ft_strlcpy(b_10, "Hello", sizeof(b_10)), b_10);
	printf("%zu, >%s<\n", strlcpy(b_2_10, "Hello", sizeof(b_2_10)), b_2_10);
	printf("\n");
	printf("%zu, >%s<\n", ft_strlcpy(b_10, "123456789", sizeof(b_10)), b_10);
	printf("%zu, >%s<\n", strlcpy(b_2_10, "123456789", sizeof(b_2_10)), b_2_10);
	printf("\n");
	printf("%zu, >%s<\n", ft_strlcpy(b_10, "1234567890", sizeof(b_10)), b_10);
	printf("%zu, >%s<\n", strlcpy(b_2_10, "1234567890", sizeof(b_2_10)), b_2_10);
	printf("\n");
	printf("%zu, >%s<\n", ft_strlcpy(b_10, "", sizeof(b_10)), b_10);
	printf("%zu, >%s<\n", strlcpy(b_2_10, "", sizeof(b_2_10)), b_2_10);
	printf("\n");
	printf("%zu, >%s<\n", ft_strlcpy(b_0, "", 0), b_0);
	printf("%zu, >%s<\n", strlcpy(b_0, "", 0), b_0);
	printf("\n");
	printf("%zu, >%s<\n", ft_strlcpy(b_0, "Hello", 0), b_0);
	printf("%zu, >%s<\n", strlcpy(b_0, "Hello", 0), b_0);
	printf("\n");
	printf("%zu, >%s<\n", ft_strlcpy(b_10, "Hello\0World", sizeof(b_10)), b_10);
	printf("%zu, >%s<\n", strlcpy(b_2_10, "Hello\0World", sizeof(b_2_10)), b_2_10);
	printf("\n");
	printf("%zu, >%s<\n", ft_strlcpy(b_10, "Hello World", 2), b_10);
	printf("%zu, >%s<\n", strlcpy(b_10, "Hello World", 2), b_10);

	printf("\n\nft_strlcat\n");
	printf("\n#0\n");
	char b_cat_1[10] = "";
	char b_cat_2[10] = "";
	printf("%zu, \t>%s<\n", ft_strlcat(b_cat_1, "DMGT", 5), b_cat_1);
	printf("%zu, \t>%s<\n", strlcat(b_cat_2, "DMGT", 5), b_cat_2);
	printf("%d\n", strcmp(b_cat_1, b_cat_2));

	printf("\n#1\n");
	char b_cat_1d1[20] = "Sentence one.";
	char b_cat_1d2[20] = "Sentence one.";
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_1d1, "And another one.", sizeof(b_cat_1d1)), b_cat_1d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_1d2, "And another one.", sizeof(b_cat_1d2)), b_cat_1d2);
	printf("%d\n", strcmp(b_cat_1d1, b_cat_1d2));

	printf("\n#2\n");
	char b_cat_2d1[10] = "";
	char b_cat_2d2[10] = "";
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_2d1, "And another one.", sizeof(b_cat_2d1)), b_cat_2d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_2d2, "And another one.", sizeof(b_cat_2d2)), b_cat_2d2);
	printf("%d\n", strcmp(b_cat_2d1, b_cat_2d2));

	printf("\n#3\n");
	char b_cat_3d1[] = "And another one.";
	char b_cat_3s1[40] = "";
	char b_cat_3d2[] = "And another one.";
	char b_cat_3s2[40] = "";
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_3d1, b_cat_3s1, sizeof(b_cat_3d1)), b_cat_3d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_3d2, b_cat_3s2, sizeof(b_cat_3d2)), b_cat_3d2);
	printf("%d\n", strcmp(b_cat_3d1, b_cat_3d2));

	printf("\n#4\n");
	char b_cat_4d1[] = {'\0'};
	char b_cat_4d2[] = {'\0'};
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_4d1, "", sizeof(b_cat_4d1)), b_cat_4d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_4d2, "", sizeof(b_cat_4d2)), b_cat_4d2);
	printf("%d\n", strcmp(b_cat_4d1, b_cat_4d2));

	printf("\n#5\n");
	char b_cat_5d1[40] = "123";
	char b_cat_5d2[40] = "123";
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_5d1, "And another one.", 0), b_cat_5d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_5d2, "And another one.", 0), b_cat_5d2);
	printf("%d\n", strcmp(b_cat_5d1, b_cat_5d2));

	printf("\n#6\n");
	char b_cat_6d1[40] = "";
	char b_cat_6d2[40] = "";
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_6d1, "And another one.", 10), b_cat_6d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_6d2, "And another one.", 10), b_cat_6d2);
	printf("%d\n", strcmp(b_cat_6d1, b_cat_6d2));

	printf("\n#7\n");
	char b_cat_7d1[10] = "";
	char b_cat_7d2[10] = "";
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_7d1, "", sizeof(b_cat_7d1)), b_cat_7d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_7d2, "", sizeof(b_cat_7d2)), b_cat_7d2);
	printf("%d\n", strcmp(b_cat_7d1, b_cat_7d2));

	printf("\n#8\n");
	char b_cat_8d1[] = "And another one.";
	char b_cat_8s1[40] = "";
	char b_cat_8d2[] = "And another one.";
	char b_cat_8s2[40] = "";
	printf("%zu,\t>%s<\n", ft_strlcat(b_cat_8d1, b_cat_8s1, 5), b_cat_8d1);
	printf("%zu,\t>%s<\n", strlcat(b_cat_8d2, b_cat_8s2, 5), b_cat_8d2);
	printf("%d\n", strcmp(b_cat_8d1, b_cat_8d2));

	printf("\nft_toupper\n");
	int toupper_c = 'a';
	while (toupper_c <= 'z')
	{
		printf("%c: %c, %c\n", (char)toupper_c, (char)toupper(toupper_c), (char)ft_toupper(toupper_c));
		toupper_c++;
	}
	toupper_c = 'A';
	while (toupper_c <= 'Z')
	{
		printf("%c: %c, %c\n", (char)toupper_c, (char)toupper(toupper_c), (char)ft_toupper(toupper_c));
		toupper_c++;
	}
	printf("0: %c, %c\n", (char)toupper('0'), (char)ft_toupper('0'));
	printf("-: %c, %c\n", (char)toupper('-'), (char)ft_toupper('-'));

	printf("\nft_lower\n");
	toupper_c = 'a';
	while (toupper_c <= 'z')
	{
		printf("%c: %c, %c\n", (char)toupper_c, (char)tolower(toupper_c), (char)ft_tolower(toupper_c));
		toupper_c++;
	}
	toupper_c = 'A';
	while (toupper_c <= 'Z')
	{
		printf("%c: %c, %c\n", (char)toupper_c, (char)tolower(toupper_c), (char)ft_tolower(toupper_c));
		toupper_c++;
	}
	printf("0: %c, %c\n", (char)tolower('0'), (char)ft_tolower('0'));
	printf("-: %c, %c\n", (char)tolower('-'), (char)ft_tolower('-'));

	printf("\nft_strchr\n");
	char strchr_arr1[] = "Hello World!";
	printf(">%s<\n>%s<\n", strchr(strchr_arr1, 'c'), ft_strchr(strchr_arr1, 'c'));
	printf(">%s<\n>%s<\n", strchr(strchr_arr1, 'o'), ft_strchr(strchr_arr1, 'o'));
	printf(">%s<\n>%s<\n", strchr(strchr_arr1, '!'), ft_strchr(strchr_arr1, '!'));
	printf(">%s<\n>%s<\n", strchr(strchr_arr1, '\0'), ft_strchr(strchr_arr1, '\0'));
	printf(">%s<\n>%s<\n", strchr(strchr_arr1, 'W'), ft_strchr(strchr_arr1, 'W'));

	printf("\nft_strrchr\n");
	char strchr_arr2[] = "Hello\0World!";
	printf(">%s<\n>%s<\n", strrchr(strchr_arr2, 'c'), ft_strrchr(strchr_arr2, 'c'));
	printf(">%s<\n>%s<\n", strrchr(strchr_arr2, 'o'), ft_strrchr(strchr_arr2, 'o'));
	printf(">%s<\n>%s<\n", strrchr(strchr_arr2, 'l'), ft_strrchr(strchr_arr2, 'l'));
	printf(">%s<\n>%s<\n", strrchr(strchr_arr2, '!'), ft_strrchr(strchr_arr2, '!'));
	printf(">%s<\n>%s<\n", strrchr(strchr_arr2, '\0'), ft_strrchr(strchr_arr2, '\0'));
	printf(">%s<\n>%s<\n", strrchr(strchr_arr2, 'W'), ft_strrchr(strchr_arr2, 'W'));

	printf("\nft_strncmp\n");
	const char *s1 = "Hello";
	const char *empty_str1 = "";
	printf("#1: %d, %d\n", strncmp(s1, s1, 5), ft_strncmp(s1, s1, 5));
	printf("#2: %d, %d\n", strncmp(s1, "Hello!", 6), ft_strncmp(s1, "Hello!", 6));
	printf("#3: %d, %d\n", strncmp("Hello!", s1, 6), ft_strncmp("Hello!", s1, 6));
	printf("#4: %d, %d\n", strncmp(s1, "Hello!", 0), ft_strncmp(s1, "Hello!", 0));
	printf("#5: %d, %d\n", strncmp(s1, s1, 1), ft_strncmp(s1, s1, 1));
	printf("#6: %d, %d\n", strncmp(s1, s1, 10), ft_strncmp(s1, s1, 10));
	printf("#9: %d, %d\n", strncmp(empty_str1, s1, 5), ft_strncmp(empty_str1, s1, 5));
	printf("#10: %d, %d\n", strncmp(s1, empty_str1, 5), ft_strncmp(s1, empty_str1, 5));
	printf("#11: %d, %d\n", strncmp(empty_str1, empty_str1, 5), ft_strncmp(empty_str1, empty_str1, 5));

	printf("\nft_memchr\n");
	printf("#1: %s, %s\n", (char *)memchr(s1, 'o', 4), (char *)ft_memchr(s1, 'o', 4));
	printf("#2: %s, %s\n", (char *)memchr(s1, 'o', 5), (char *)ft_memchr(s1, 'o', 5));
	if (s1 + 4 == ft_memchr(s1, 'o', 5) && ft_memchr(s1, 'o', 5) == memchr(s1, 'o', 5))
		printf("#3: FINE\n");
	printf("#4: %s, %s\n", (char *)memchr(s1, '\0', 5), (char *)ft_memchr(s1, '\0', 5));

	printf("\nft_memcmp\n");
	int int_arr1[] = {0, 99, 400};
	int int_arr2[] = {0, 99, 401};
	const char *s2 = "Hello!";
	printf("#1: %d, %d\n", memcmp(s1, s1, 5), ft_memcmp(s1, s1, 5));
	printf("#2: %d, %d\n", memcmp(s1, s2, 6), ft_memcmp(s1, s2, 6));
	printf("#3: %d, %d\n", memcmp(s2, s1, 6), ft_memcmp(s2, s1, 6));
	printf("#4: %d, %d\n", memcmp(int_arr1, int_arr1, 12), ft_memcmp(int_arr1, int_arr1, 12));
	printf("#5: %d, %d\n", memcmp(int_arr2, int_arr1, 12), ft_memcmp(int_arr2, int_arr1, 12));

	printf("\nft_strnstr\n");
	const char largestring[] = "Foo Bar Baz";
	const char smallstring[] = "Bar";
	const char emptystring[] = "";
	printf("#1: %s, %s\n", strnstr(largestring, smallstring, 0), ft_strnstr(largestring, smallstring, 0));
	printf("#2: %s, %s\n", strnstr(largestring, smallstring, 6), ft_strnstr(largestring, smallstring, 6));
	printf("#3: %s, %s\n", strnstr(smallstring, smallstring, 6), ft_strnstr(smallstring, smallstring, 6));
	printf("#4: %s, %s\n", strnstr(largestring, smallstring, 7), ft_strnstr(largestring, smallstring, 7));
	printf("#5: %s, %s\n", strnstr(largestring, largestring, 11), ft_strnstr(largestring, largestring, 11));
	printf("#6: %s, %s\n", strnstr(largestring, emptystring, 11), ft_strnstr(largestring, emptystring, 11));
	printf("#7: %s, %s\n", strnstr(emptystring, largestring, 11), ft_strnstr(emptystring, largestring, 11));

	printf("\nft_atoi\n");
	printf("#0: %d, %d\n", atoi(""), ft_atoi(""));
	printf("#1: %d, %d\n", atoi("70123456789"), ft_atoi("70123456789"));
	printf("#2: %d, %d\n", atoi("-1 g"), ft_atoi("-1 g"));
	printf("#3: %d, %d\n", atoi("1"), ft_atoi("1"));
	printf("#4: %d, %d\n", atoi("0"), ft_atoi("0"));
	printf("#5: %d, %d\n", atoi(""), ft_atoi(""));
	printf("#6: %d, %d\n", atoi("0123-456789"), ft_atoi("0123-456789"));
	printf("#7: %d, %d\n", atoi("   +400g"), ft_atoi("   +400g"));
	printf("#8: %d, %d\n", atoi(" \t\v\f  -01"), ft_atoi(" \t\v\f  -01"));
	printf("#9: %d, %d\n", atoi(" \t\b\v\f  +---+10 "), ft_atoi(" \t\b\v\f  +---+10 "));
	printf("#10: %d, %d\n", atoi("	 +++--FF88AAa"), ft_atoi("	 +++--FF88AAa"));
	printf("#11: %d, %d\n", atoi("01"), ft_atoi("01"));
	printf("#12: %d, %d\n", atoi("	-101101  g"), ft_atoi("	-101101  g"));
	printf("#13: %d, %d\n", atoi(" \t\v\f  +---+FF "), ft_atoi(" \t\v\f  +---+FF "));
	printf("#14: %d, %d\n", atoi("	 +---59"), ft_atoi("	 +---59"));

	printf("\nft_calloc\n");
	int *arr = (int *)ft_calloc(0, sizeof(int));
	free(arr);
	i = 5;
	arr = (int *)ft_calloc(i, sizeof(int));
	int j = 0;
	while (j < i)
	{
		printf("%c, ", arr[j]);
		j++;
	}
	printf("\n");
	free(arr);

	printf("\nft_strdup\n");
	char *strdup_src = "Hello!";
	char *strdup_dst = ft_strdup(strdup_src);
	printf("%d, %p, %p\n", ft_strncmp(strdup_src, strdup_dst, 7), strdup_src, strdup_dst);
	free(strdup_dst);
	strdup_src = "";
	strdup_dst = ft_strdup(strdup_src);
	printf("%d, %p, %p\n", ft_strncmp(strdup_src, strdup_dst, 1), strdup_src, strdup_dst);
	free(strdup_dst);

	printf("\nft_strjoin\n");
	char *str_strjoin = ft_strjoin("Hello", "123");
	printf(">%s<\n", str_strjoin);
	free(str_strjoin);
	str_strjoin = ft_strjoin("", "123");
	printf(">%s<\n", str_strjoin);
	free(str_strjoin);
	str_strjoin = ft_strjoin("123", "");
	printf(">%s<\n", str_strjoin);
	free(str_strjoin);
	str_strjoin = ft_strjoin("", "");
	printf(">%s<\n", str_strjoin);
	free(str_strjoin);

	printf("\nft_strtrim\n");
	char *str_strtrim = ft_strtrim("   Hello ", " ");
	printf("#1 >%s<\n", str_strtrim);
	free(str_strtrim);
	str_strtrim = ft_strtrim(" +----+ +How is it going? +++-- -", " +-");
	printf("#2 >%s<\n", str_strtrim);
	free(str_strtrim);
	str_strtrim = ft_strtrim(" +---- +++-- -", " +-");
	printf("#3 >%s<\n", str_strtrim);
	free(str_strtrim);
	str_strtrim = ft_strtrim(" +---- +++-- -", "");
	printf("#4 >%s<\n", str_strtrim);
	free(str_strtrim);
	str_strtrim = ft_strtrim("", "");
	printf("#5 >%s<\n", str_strtrim);
	free(str_strtrim);
	str_strtrim = ft_strtrim("", "+--=+");
	printf("#6 >%s<\n", str_strtrim);
	free(str_strtrim);

	printf("\nft_itoa\n");
	char *str_itoa = ft_itoa(120);
	printf(">%s<\n", str_itoa);
	free(str_itoa);
	str_itoa = ft_itoa(969696);
	printf(">%s<\n", str_itoa);
	free(str_itoa);
	str_itoa = ft_itoa(-1);
	printf(">%s<\n", str_itoa);
	free(str_itoa);
	str_itoa = ft_itoa(0);
	printf(">%s<\n", str_itoa);
	free(str_itoa);
	str_itoa = ft_itoa(1);
	printf(">%s<\n", str_itoa);
	free(str_itoa);
	str_itoa = ft_itoa(-2147483648);
	printf(">%s<\n", str_itoa);
	free(str_itoa);
	str_itoa = ft_itoa(2147483647);
	printf(">%s<\n", str_itoa);
	free(str_itoa);

	printf("\nft_strmapi\n");
	char (*ptr_uppercase)(unsigned int, char);
	ptr_uppercase = &uppercase;
	char *str_strmapi = ft_strmapi("Hello, World!", ptr_uppercase);
	printf(">%s<\n", str_strmapi);
	free(str_strmapi);

	str_strmapi = ft_strmapi("Hello, World!", NULL);
	printf(">%s<\n", str_strmapi);
	free(str_strmapi);

	printf("\nft_split\n");
	char **words = ft_split("Here     will be      my sentence,    here     we go ", ' ');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");

	words = ft_split("Here     will be      my sentence,    here     we go ", '\0');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");

	words = ft_split("", ' ');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");

	words = ft_split("", '\0');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");
	words = ft_split("\0", '\0');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");

	words = ft_split("          ", ' ');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");

	words = ft_split("          ", '\0');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");

	words = ft_split("Hi", ' ');
	i = 0;
	while (words[i])
	{
		printf(">%s<\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	printf("\n-\n");

	printf("\nft_substr\n");
	char *substr_result;
	substr_result = ft_substr("H", 0, 0);
	printf("#1 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("H", 0, 1);
	printf("#2 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("H", 0, 2);
	printf("#3 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("H", 0, 3);
	printf("#4 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("Hello", 0, 3);
	printf("#6 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("Hello", 0, 4);
	printf("#7 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("Hello", 0, 5);
	printf("#8 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("Hello", 0, 6);
	printf("#9 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("Hello", 0, 10);
	printf("#10 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("Hello", 5, 5);
	printf("#11 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("Hello", 6, 5);
	printf("#12 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("lorem ipsum dolor sit amet", 0, 10);
	printf("#13 >%s<\n", substr_result);
	free(substr_result);
	substr_result = ft_substr("lorem ipsum dolor sit amet", 7, 10);
	printf("#14 >%s<\n", substr_result);
	free(substr_result);

	printf("\nft_putchar_fd\n");
	ft_putchar_fd('c', 1);
	printf("\n");
	ft_putendl_fd("Hello", 1);
	printf("\n");
	ft_putnbr_fd(2, 1);
	printf("\n");
	ft_putstr_fd("Hello", 1);
	printf("\n");

	printf("\nft_striteri\n");
	void (*ptr_uppercase_ptr)(unsigned int, char *);
	ptr_uppercase_ptr = &uppercase_ptr;
	char ft_striteri_str[] = "Hello, World!";
	ft_striteri(ft_striteri_str, ptr_uppercase_ptr);
	printf(">%s<\n", ft_striteri_str);

	ft_strmapi(ft_striteri_str, NULL);

	printf("\nft_lstadd_front\n");
	t_list *elem = ft_lstnew("a");
	t_list *elem2 = ft_lstnew("b");
	t_list *elem3 = ft_lstnew("c");
	t_list *elem4 = ft_lstnew("d");
	t_list *begin = NULL;
	ft_lstadd_front(&begin, elem4);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem);
	while (begin)
	{
		printf("%s\n", (char *)begin->content);
		begin = begin->next;
	}

	printf("\nEND _______________________________\n\n");
	return (0);
}
