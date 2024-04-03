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
// #include "ex00/ft_strcmp.c"
// #include "ex01/ft_strncmp.c"
// #include "ex02/ft_strcat.c"
// #include "ex03/ft_strncat.c"
// #include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int	main(void)
{
	// ft_strcmp.c
	// char st1[] = "Hi mate";
	// char st2[] = "Hi mate&";
	// printf("ft: %d, or: %d\n", ft_strcmp(&st1[0], &st2[0]), strcmp(&st1[0], &st2[0]));

	// ft_strncmp.c
	// char st1[] = "Hiep";
	// char st2[] = "Hi mate";
	// unsigned int	i = 1;
	// printf("ft: %d, or: %d\n", ft_strncmp(&st1[0], &st2[0], i), strncmp(&st1[0], &st2[0], i));
	// i = 0;
	// printf("ft: %d, or: %d\n", ft_strncmp(&st1[0], &st2[0], i), strncmp(&st1[0], &st2[0], i));
	// char st3[] = "Hi mate!";
	// char st4[] = "Hi mate";
	// i = 7;

	// printf("ft: %d, or: %d\n", ft_strncmp(&st3[0], &st4[0], i), strncmp(&st3[0], &st4[0], i));
	// i = 8;
	// printf("ft: %d, or: %d\n", ft_strncmp(&st3[0], &st4[0], i), strncmp(&st3[0], &st4[0], i));
	// i = 9;
	// printf("ft: %d, or: %d\n", ft_strncmp(&st3[0], &st4[0], i), strncmp(&st3[0], &st4[0], i));

	// ft_strcat.c
	// char src[] = "You alright?";
	// char dst[26] = "Hi mate!";
	// char srcc[] = "You alright?";
	// char dstt[26] = "Hi mate!";
	// printf("ft: %s.\nor: %s.\n", ft_strcat(&dst[0], &src[0]), strcat(&dstt[0], &srcc[0]));

	// char src1[] = "";
	// char dst1[26] = "Hi mate!";
	// char srcc1[] = "";
	// char dstt1[26] = "Hi mate!";
	// printf("ft: %s.\nor: %s.\n", ft_strcat(&dst1[0], &src1[0]), strcat(&srcc1[0], &dstt1[0]));

	// char src2[26] = "Hey";
	// char dst2[] = "";
	// char srcc2[26] = "Hey";
	// char dstt2[] = "";
	// printf("ft: %s.\nor: %s.\n", ft_strcat(&dst2[0], &src2[0]), strcat(&srcc2[0], &dstt2[0]));

	// char src3[26] = "Hey";
	// char dst3[10] = "";
	// char srcc3[26] = "Hey";
	// char dstt3[10] = "";
	// printf("ft: %s.\nor: %s.\n", ft_strcat(&dst3[0], &src3[0]), strcat(&srcc3[0], &dstt3[0]));

	// ft_strncat.c
	// unsigned int	i = 10;
	// char src[] = "You alright?";
	// char dst[26] = "Hi mate!";
	// char src1[] = "You alright?";
	// char dst1[26] = "Hi mate!";
	// printf("ft: %s, or: %s.\n", ft_strncat(&dst[0], &src[0], i), strncat(&dst1[0], &src1[0], i));

	// ft_strstr.c
	// char str[] = "jfj-fjnjfjnkl";
	// char s[] = "fjn";
	// char str1[] = "jfj-fjnjfjnkl";
	// char s1[] = "fjn";
	// printf("%s.\n%s.\n", ft_strstr(&str[0], &s[0]), strstr(&str1[0], &s1[0]));

	// char str2[] = "jfj-fjnjfjnkl";
	// char s2[] = "";
	// char str3[] = "jfj-fjnjfjnkl";
	// char s3[] = "";
	// printf("%s.\n%s.\n", ft_strstr(&str2[0], &s2[0]), strstr(&str3[0], &s3[0]));

	// char str4[] = "jfj-fjnjfjnkl";
	// char s4[1];
	// char str5[] = "jfj-fjnjfjnkl";
	// char s5[1];
	// printf("%s.\n%s.\n", ft_strstr(&str4[0], &s4[0]), strstr(&str5[0], &s5[0]));

	// char str6[] = "jfj-fjnjfjnkl";
	// char s6[] = {'\0'};
	// char str7[] = "jfj-fjnjfjnkl";
	// char s7[] = {'\0'};
	// printf("%s.\n%s.\n", ft_strstr(&str6[0], &s6[0]), strstr(&str7[0], &s7[0]));

	// char str8[] = "jfj-fjnjfjnkl";
	// char s8[] = "980";
	// char str9[] = "jfj-fjnjfjnkl";
	// char s9[] = "980";
	// printf("%s.\n%s.\n", ft_strstr(&str8[0], &s8[0]), strstr(&str9[0], &s9[0]));

	// ft_strlcat.c
	unsigned int	i = 20;
	char dest1[20] = "Sentence one.";
	char src2[] = "And another one.";
	printf("%d\n", ft_strlcat(&dest1[0], &src2[0], i));

	i = 30;
	char dest3[30];
	char src4[] = "And another one.";
	printf("%d\n", ft_strlcat(&dest3[0], &src4[0], i));

	i = 0;
	char dest5[] = "And another one.";
	char src6[20] = {'\0'};
	printf("%d\n", ft_strlcat(&dest5[0], &src6[0], i));

	i = 1;
	char dest7[] = {'\0'};
	char src8[] = {'\0'};
	printf("%d\n", ft_strlcat(&dest7[0], &src8[0], i));
	return 0;
}

// norminette -R CheckForbiddenSourceHeader
