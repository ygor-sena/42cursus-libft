/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_memcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:15:57 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 14:48:53 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_standard_memory_cpy(void)
{	
	char	expected[20] = "This a long string.";
	char	test[20] = "This a long string.";
	char	to_cpy[25] = "New string to copy there";
	size_t	size;

	size = 10;
	printf("Strings before memcpy:\n"
			"FT: %s\nCC: %s\n", test, expected);
	memcpy(expected, to_cpy, size);
	ft_memcpy(test, to_cpy, size);
	printf("\nStrings after memcpy:\n"
			"FT: %s\nCC: %s\n", test, expected);
	printf("\nLength (ft/std): %ld | %ld\n",
			strlen(test), strlen(expected));
	assert(strlen(expected) == strlen(test));
	assert(strcmp(expected, test) == 0);
	printf("\e[46m\e[1;37m ft_memcpy \033[0m ");
	printf("\e[42m\e[1;37m test_standard_memory_cpy: OK! \033[0m\n\n");
}

static void	test_null_copy(void)
{
	char	expected[] = "\0";
	char	test[] = "teste";
	char	to_cpy[] = "\0";
	size_t	size;

	size = 10;
	printf("Strings before memcpy:\n"
			"FT: %s\nCC: %s\n", test, expected);
	ft_memcpy(test, to_cpy, size);	
	memcpy(expected, to_cpy, size);
	printf("\nStrings after memcpy:\n"
			"FT: %s\nCC: %s\n", test, expected);
	printf("\nLength (ft/std): %ld | %ld\n",
			strlen(test), strlen(expected));
	assert(strcmp(expected, test) == 0);
	assert(strlen(expected) == strlen(test));
	printf("\e[46m\e[1;37m ft_memcpy \033[0m ");
	printf("\e[42m\e[1;37m test_null_copy: OK! \033[0m\n\n");
}

/* static void	test_not_enough_space_to_cpy(void)
{
	char	expected[20] = "This a long string.";
	char	test[20] = "This a long string.";
	char	to_cpy[25] = "New string to copy there";
	size_t	size;

	size = 10;
	printf("Strings before memcpy:\n"
			"FT: %s\nCC: %s\n", test, expected);	
	memcpy(expected + 15, to_cpy, size);
	ft_memcpy(test + 15, to_cpy, size);
	printf("\nStrings after memcpy:\n"
			"FT: %s\nCC: %s\n", test, expected);
	printf("\nLength (ft/std): %ld | %ld\n",
			strlen(test), strlen(expected));
	assert(strcmp(expected, test) == 0);
	assert(strlen(expected) == strlen(test));
	printf("\e[46m\e[1;37m ft_memcpy \033[0m ");
	printf("\e[42m\e[1;37m test_not_enough_space_to_cpy: OK! \033[0m\n\n");
} */

/* 	test_not_enough_space_to_cpy &&
	test_null_copy
		differences in size and content because of
		printf() showing non null-terminated strings 
		when copy occurs. EXPECTED! */
void	test_ft_memcpy(void)
{
	test_standard_memory_cpy();
	test_null_copy();
	//test_not_enough_space_to_cpy();
}
