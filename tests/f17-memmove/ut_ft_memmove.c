/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_memmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:59:05 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 14:53:32 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_standard_cpy_to_left(void)
{	
	char	expected[20] = "This a long string.";
	char	test[20] = "This a long string.";
	size_t	size;

	size = 10;
	printf("Strings before memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);
	memmove(expected, expected + 1, size);
	ft_memmove(test, test + 1, size);
	printf("\nStrings after memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);
	printf("\nLength (ft/std): %ld | %ld\n",
			strlen(test), strlen(expected));
	assert(strlen(expected) == strlen(test));
	assert(strcmp(expected, test) == 0);
	printf("\e[46m\e[1;37m ft_memmove \033[0m ");
	printf("\e[42m\e[1;37m test_standard_cpy_to_left: OK! \033[0m\n\n");
}

static void	test_standard_cpy_to_right(void)
{	
	char	expected[20] = "This a long string.";
	char	test[20] = "This a long string.";
	size_t	size;

	size = 10;
	printf("Strings before memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);
	memmove(expected + 1, expected, size);
	ft_memmove(test + 1, test, size);
	printf("\nStrings after memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);
	printf("\nLength (ft/std): %ld | %ld\n",
			strlen(test), strlen(expected));
	assert(strlen(expected) == strlen(test));
	assert(strcmp(expected, test) == 0);
	printf("\e[46m\e[1;37m ft_memmove \033[0m ");
	printf("\e[42m\e[1;37m test_standard_cpy_to_right: OK! \033[0m\n\n");
}

/* static void	test_not_enough_space_to_cpy(void)
{
	//This a long str -- > 15
	//y there --> 7
	//This a long strNew string to copy there --> 39
	char	expected[20] = "This a long string.";
	char	test[20] = "This a long string.";
	char	to_move[25] = "New string to copy there";
	size_t	size;

	size = 30;
	printf("Strings before memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);	
	memmove(expected + 15, to_move, size);
	ft_memmove(test + 15, to_move, size);
	printf("\nStrings after memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);
	printf("\nLength (ft/std): %ld | %ld\n",
			strlen(test), strlen(expected));
	assert(strcmp(expected, test) == 0);
	assert(strlen(expected) == strlen(test));
	printf("\e[46m\e[1;37m ft_memmove \033[0m ");
	printf("\e[42m\e[1;37m test_not_enough_space_to_cpy: OK! \033[0m\n\n");
} */

/* static void	test_null_copy(void)
{
	char	expected[] = "\0";
	char	test[] = "\0";
	size_t	size;

	size = 10;
	printf("Strings before memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);
	memmove(expected, expected + 1, size);
	ft_memmove(test, test + 1, size);
	printf("\nStrings after memmove:\n"
			"FT: %s\nCC: %s\n", test, expected);
	printf("\nLength (ft/std): %ld | %ld\n",
			strlen(test), strlen(expected));
	assert(strlen(expected) == strlen(test));
	assert(strcmp(expected, test) == 0);
	printf("\e[46m\e[1;37m ft_memmove \033[0m ");
	printf("\e[42m\e[1;37m test_null_copy: OK! \033[0m\n\n");
} */

/* 	test_not_enough_space_to_cpy &&
	test_null_copy
		differences in size and content because of
		printf() showing non null-terminated strings 
		when copy occurs. EXPECTED! */
void	test_ft_memmove(void)
{
	test_standard_cpy_to_left();
	test_standard_cpy_to_right();
	//test_not_enough_space_to_cpy();
	//test_null_copy();
}
