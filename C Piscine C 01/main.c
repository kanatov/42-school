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
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int	main(void)
{
	int a = 10;
	int k = 2;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********j = &i;
	int	tab[] = {7,5,6,3,8,9,0};

	ft_ft(&a);
	printf("%d", a);
	printf("\n");

	a = 10;

	ft_ultimate_ft(j);
	printf("%d", a);
	printf("\n");

	ft_ultimate_ft(j);
	printf("%d", a);
	printf("\n");

	ft_swap(&a, &k);
	printf("a: %d, k: %d", a, k);
	printf("\n");
	
	int div;
	int mod;
	a = 10;
	k = 3;
	ft_div_mod(a, k, &div, &mod);
	printf("div: %d, mod: %d", div, mod);
	printf("\n");

	a = 10;
	k = 3;
	ft_ultimate_div_mod(&a, &k);
	printf("a: %i, k: %d", a, k);
	printf("\n");

	char hello[] = "AMA\nAMA";
	ft_putstr(hello);
	printf("\n");

	a = ft_strlen(hello);
	printf("Word: %s, length: %d", hello, a);
	printf("\n");

	// ft_rev_int_tab(tab, 6);
	// printf("\n");

	ft_sort_int_tab(tab, 7);
	int tabi = 0;
	while (tabi < 7)
	{
		printf("%d, ", tab[tabi]);
		tabi++;
	}
	return (0);
}
// norminette -R CheckForbiddenSourceHeader
