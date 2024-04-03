/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:22:59 by ikanatov          #+#    #+#             */
/*   Updated: 2024/03/06 15:23:21 by ikanatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "ex04/ft_convert_base.c"
#include "ex04/ft_convert_base2.c"
#include "ex05/ft_split.c"
// #include "ex06/ft_is_prime.c"
// #include "ex07/ft_find_next_prime.c"
// #include "ex08/ft_ten_queens_puzzle.c"

int	main(void)
{
	// printf("\nft_strdup.c\n");
	// char str1[] = "My new string";
	// char *str2;
	// str2 = ft_strdup(str1);
	// str1[0] = '0';
	// str1[1] = '0';
	// str1[2] = '0';
	// printf("%s\n%s\n%d\n", str1, str2, str1[13] == str2[13]);

	// printf("\nft_range.c\n");
	// int min = 22;
	// int max = 32;
	// int *arr = ft_range(min, max);
	// int i = 0;
	// while (arr != NULL && i < max - min)
	// {
	// 	printf("%d ", arr[i]);
	// 	i++;
	// }
	// min = 32;
	// max = 32;
	// arr = ft_range(min, max);
	// if (arr == 0)
	// 	printf("\nNULL\n");

	// printf("\nft_ultimate_range.c\n");
	// int min = 22;
	// int max = 32;
	// int *arr2;
	// printf("ft_ultimate_range: %d\n", ft_ultimate_range(&arr2, min, max));
	// int i = 0;
	// while ( i < max - min)
	// {
	// 	printf("%d ", arr2[i]);
	// 	i++;
	// }
	// min = 42;
	// max = 32;
	// int *arr4;
	// printf("\nft_ultimate_range: %d\n", ft_ultimate_range(&arr4, min, max));
	// if (arr4 == NULL)
	// 	printf("NULL\n");

	// printf("\nft_strjoin.c\n");
	// int size_join = 4;
	// char **strs = (char **)malloc(sizeof(char *) * size_join);
    // strs[0] = (char *)malloc(sizeof(char) * 4);
    // strs[1] = (char *)malloc(sizeof(char) * 4);
    // strs[2] = (char *)malloc(sizeof(char) * 4);
    // strs[3] = (char *)malloc(sizeof(char) * 5);
    // strs[0][0] = 'H'; strs[0][1] = 'e'; strs[0][2] = 'y'; strs[0][3] = '\0';
    // strs[1][0] = 'h'; strs[1][1] = 'o'; strs[1][2] = 'w'; strs[1][3] = '\0';
    // strs[2][0] = 'a'; strs[2][1] = 'r'; strs[2][2] = 'e'; strs[2][3] = '\0';
    // strs[3][0] = 'y'; strs[3][1] = 'o'; strs[3][2] = 'u'; strs[3][3] = '\?'; strs[3][4] = '\0';
	// char *sep = "+";
	// char *join = ft_strjoin(0, strs, sep);
	// printf("Before free: >%s<\n", join);
	// free(join);
	// printf("After free: >%s<\n", join);

	// char **strs2 = (char **)malloc(sizeof(char *) * size_join);
	// strs2[0] = "Amazing";
	// strs2[1] = "travel";
	// strs2[2] = "day";
	// strs2[3] = "together";
	// char *join2 = ft_strjoin(size_join, strs2, sep);
	// printf("Before free: >%s<\n", join2);
	// free(join2);
	// printf("After free: >%s<\n", join2);

	// char **strs3 = (char **)malloc(sizeof(char *));
	// if (strs3 == NULL)
	// 	printf("NULL MALLOC\n");
	// strs3[0] = "one";
	// char *join3 = ft_strjoin(1, strs3, sep);
	// printf("Before free: >%s<\n", join3);
	// free(join3);
	// printf("After free: >%s<\n", join3);

	// char **strs4 = (char **)malloc(sizeof(char *) * size_join);
	// if (strs4 == NULL)
	// 	printf("NULL MALLOC\n");
	// strs4[0] = "one";
	// strs4[1] = "";
	// strs4[2] = "two";
	// strs4[3] = "";
	// char *join4 = ft_strjoin(size_join, strs4, sep);
	// printf("Before free: >%s<\n", join4);
	// free(join4);
	// printf("After free: >%s<\n", join4);

	// char **strs5 = (char **)malloc(sizeof(char *) * size_join);
	// if (strs5 == NULL)
	// 	printf("NULL MALLOC\n");
	// strs5[0] = "";
	// strs5[1] = "one";
	// strs5[2] = "";
	// strs5[3] = "two";
	// char *join5 = ft_strjoin(size_join, strs5, sep);
	// printf("Before free: >%s<\n", join5);
	// free(join5);
	// printf("After free: >%s<\n", join5);

	// char **strs6 = (char **)malloc(sizeof(char *) * size_join);
	// if (strs6 == NULL)
	// 	printf("NULL MALLOC\n");
	// strs6[0] = "Zero";
	// strs6[1] = "One";
	// strs6[2] = "Two";
	// strs6[3] = "Three";
	// sep = "";
	// char *join6 = ft_strjoin(size_join, strs6, sep);
	// printf("Before free: >%s<\n", join6);
	// free(join6);
	// printf("After free: >%s<\n", join6);


	printf("\nft_convert_base.c\n");
	printf("Convert '0' from base '0' to base '0123456789ABCDEF': \n>%s<\n", ft_convert_base((char *)"0", (char *)"0", (char *)"0123456789ABCDEF"));
	printf("Convert '0' from base '0123456789' to base '0123456789': \n>%s<\n", ft_convert_base((char *)"0", (char *)"0123456789", (char *)"0123456789"));
	printf("Convert '-0' from base '0123456789' to base '0123456789': \n>%s<\n", ft_convert_base((char *)"-0", (char *)"0123456789", (char *)"0123456789"));
	printf("Convert '10' from base '0123456789' to base '0123456789': \n>%s<\n", ft_convert_base((char *)"10", (char *)"0123456789", (char *)"0123456789"));
	printf("Convert '   ---++++--10' from base '01' to base '01': \n>%s<\n", ft_convert_base((char *)"   ---++++--10", (char *)"01", (char *)"01"));
	printf("Convert '   ---++ ++--10' from base '01' to base '01': \n>%s<\n", ft_convert_base((char *)"   ---++ ++--10", (char *)"01", (char *)"01"));
	printf("Convert '   ---++A++--10' from base '01' to base '01': \n>%s<\n", ft_convert_base((char *)"   ---++A++--10", (char *)"01", (char *)"01"));
	printf("Convert '   ---++00++--10' from base '01' to base '01': \n>%s<\n", ft_convert_base((char *)"   ---++00++--10", (char *)"01", (char *)"01"));
	printf("Convert '-FF' from base '0123456789ABCDEF' to base '01': \n>%s<\n", ft_convert_base((char *)"-FF", (char *)"0123456789ABCDEF", (char *)"01"));
	printf("Convert 'A1B' from base '0123456789ABCDEF' to base '01': \n>%s<\n", ft_convert_base((char *)"A1B", (char *)"0123456789ABCDEF", (char *)"01"));
	printf("Convert '' from base '0123456789ABCDEF' to base '01': \n>%s<\n", ft_convert_base((char *)"", (char *)"0123456789ABCDEF", (char *)"01"));
	printf("Convert 'A1B' from base '' to base '01': \n>%s<\n", ft_convert_base((char *)"A1B", (char *)"", (char *)"01"));
	printf("Convert 'A1B' from base '0123456789ABCDEF' to base '': \n>%s<\n", ft_convert_base((char *)"A1B", (char *)"0123456789ABCDEF", (char *)""));
	printf("Convert 'A1B' from base '01234567892BCDEF' to base '01': \n>%s<\n", ft_convert_base((char *)"A1B", (char *)"01234567892BCDEF", (char *)"01"));
	printf("Convert 'A1B' from base '0123456789ABCDEF' to base '00': \n>%s<\n", ft_convert_base((char *)"A1B", (char *)"0123456789ABCDEF", (char *)"00"));
	printf("Convert '    -----++-+400' from base '0123456789ABCDEF' to base '0123456789': \n>%s<\n", ft_convert_base((char *)"    -----++-+400", (char *)"0123456789ABCDEF", (char *)"0123456789"));
	printf("Convert '    ----++-+400' from base '0123456789ABCDEF' to base '0123456789': \n>%s<\n", ft_convert_base((char *)"    ----++-+400", (char *)"0123456789ABCDEF", (char *)"0123456789"));
	printf("Convert minimum int value (-2147483648) from base 10 to base 2: \n>%s<\n", ft_convert_base((char *)"-2147483648", (char *)"0123456789", (char *)"01"));
	printf("Convert maximum int value (2147483647) from base 10 to base 16: \n>%s<\n", ft_convert_base((char *)"2147483647", (char *)"0123456789", (char *)"0123456789ABCDEF"));
	printf("Convert minimum int value (-2147483648) from base 10 to base 8: \n>%s<\n", ft_convert_base((char *)"-2147483648", (char *)"0123456789", (char *)"01234567"));
	printf("Convert maximum int value (2147483647) from base 10 to base 8: \n>%s<\n", ft_convert_base((char *)"2147483647", (char *)"0123456789", (char *)"01234567"));
	printf("Convert maximum int value (2147483647) from base 10 to base 2: \n>%s<\n", ft_convert_base((char *)"2147483647", (char *)"0123456789", (char *)"01"));
	printf("Convert minimum int value (-20000000000) from base 8 to base 16: \n>%s<\n", ft_convert_base((char *)"-20000000000", (char *)"01234567", (char *)"0123456789ABCDEF"));
	printf("Convert maximum int value (2147483647) from base 16 to base 8: \n>%s<\n", ft_convert_base((char *)"7FFFFFFF", (char *)"0123456789ABCDEF", (char *)"01234567"));
	printf("Convert minimum int value (-2147483648) from base 16 to base 2: \n>%s<\n", ft_convert_base((char *)"-80000000", (char *)"0123456789ABCDEF", (char *)"01"));
	printf("Convert maximum int value (2147483647) from base 2 to base 16: \n>%s<\n", ft_convert_base((char *)"1111111111111111111111111111111", (char *)"01", (char *)"0123456789ABCDEF"));
	printf("Convert maximum int value (2147483647) from base 16 to base 2: \n>%s<\n", ft_convert_base((char *)"7FFFFFFF", (char *)"0123456789ABCDEF", (char *)"01"));
	printf("Convert positive decimal to binary: \n>%s<\n", ft_convert_base((char *)"42", (char *)"0123456789", (char *)"01"));
	printf("Convert negative decimal to binary: \n>%s<\n", ft_convert_base((char *)"-42", (char *)"0123456789", (char *)"01"));
	printf("Convert binary to hexadecimal: \n>%s<\n", ft_convert_base((char *)"101010", (char *)"01", (char *)"0123456789ABCDEF"));

	// printf("\nft_split.c\n");
	// char **words;
	// char str[] = "  The majestic mountain range, with its snow-capped peaks, stretches across the horizon; its beauty - awe-inspiring and timeless - captivates all who behold it.-";
	// char charset[] = "., -;";
	// char **words = ft_split(str, charset);
	// int	i = 0;
	// while (words[i])
	// {
	// 	printf(">%s<\n", words[i]);
	// 	i++;
	// }
	// if (words[i] == 0)
	// 	printf(">%s<\n", words[i]);

	// printf("\nstr2\n");
	// char str2[] = "";
	// words = ft_split(str2, charset);
	// i = 0;
	// while (words[i])
	// {
	// 	printf(">%s<\n", words[i]);
	// 	i++;
	// }
	// if (words[i] == 0)
	// 	printf(">%s<\n", words[i]);

	// printf("\nstr3\n");
	// char str3[] = " ";
	// words = ft_split(str3, charset);
	// i = 0;
	// while (words[i])
	// {
	// 	printf(">%s<\n", words[i]);
	// 	i++;
	// }
	// if (words[i] == 0)
	// 	printf(">%s<\n", words[i]);

	// printf("\nstr4\n");
	// char str4[] = "fsdf";
	// words = ft_split(str4, charset);
	// i = 0;
	// while (words[i])
	// {
	// 	printf(">%s<\n", words[i]);
	// 	i++;
	// }
	// if (words[i] == 0)
	// 	printf(">%s<\n", words[i]);

	// printf("\nstr5\n");
	// char str5[] = "0";
	// words = ft_split(str5, charset);
	// i = 0;
	// while (words[i])
	// {
	// 	printf(">%s<\n", words[i]);
	// 	i++;
	// }
	// if (words[i] == 0)
	// 	printf(">%s<\n", words[i]);

	return (0);
}
// norminette -R CheckForbiddenSourceHeader
