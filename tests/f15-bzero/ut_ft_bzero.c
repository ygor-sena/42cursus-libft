/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:00:17 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 16:00:42 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_n_is_equal_to_string(void)
{
	char	test[14] = "42 characters";
	char	expected[14] = "42 characters";
	size_t	size;

	size = 15 * sizeof(char);
	printf("\nBefore bzero(ft):  %s\n", test);
	printf("Before bzero(std): %s\n", expected);
	ft_bzero(test, size);
	bzero(expected, size);
	printf("After bzero(ft):  %s\n", test);
	printf("After bzero(std): %s\n", expected);
	assert(strcmp(test, expected) == 0);
	printf("\e[46m\e[1;37m ft_bzero \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_equal_to_string: OK! \033[0m\n\n");
}

static void	test_string_index_is_negative(void)
{	
	char	test[50] = "42 characters";
	char	expected[50] = "42 characters";
	size_t	size;

	size = 8 * sizeof(char);
	printf("\nBefore bzero(ft):  %s\n", test);
	printf("Before bzero(std): %s\n", expected);
	ft_bzero(test, size);
	bzero(expected, size);
	printf("After bzero(ft):  %s\n", test);
	printf("After bzero(std): %s\n", expected);
	assert(strcmp(test, expected) == 0);
	printf("\e[46m\e[1;37m ft_bzero \033[0m ");
	printf("\e[42m\e[1;37m test_string_index_is_negative: OK! \033[0m\n\n");
}

/* static void	test_n_is_bigger_than_string(void)
{
	char	test[50] = "42 characters";
	char	expected[50] = "42 characters";
	size_t	size;

	size = 75 * sizeof(char);
	printf("\nBefore bzero(ft):  %s\n", test);
	printf("Before bzero(std): %s\n", expected);
	ft_bzero(test, size);
	bzero(expected, size);
	printf("After bzero(ft):  %s\n", test);
	printf("After bzero(std): %s\n", expected);
	assert(strcmp(test, expected) == 0);
	printf("\e[46m\e[1;37m ft_bzero \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_bigger_than_string: OK! \033[0m\n\n");
} */

/* static void	test_n_is_negative(void)
{
	char	test[50] = "42 characters";
	char	expected[50] = "42 characters";
	size_t	size;

	size = -10 * sizeof(char);
	printf("\nBefore bzero(ft):  %s\n", test);
	printf("Before bzero(std): %s\n", expected);
	ft_bzero(test, size);
	bzero(expected, size);
	printf("After bzero(ft):  %s\n", test);
	printf("After bzero(std): %s\n", expected);
	assert(strcmp(test, expected) == 0);
	printf("\e[46m\e[1;37m ft_bzero \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_negative: OK! \033[0m\n\n");
} */

/*	test_n_is_bigger_than_string
		stack smashing detected. EXPECTED!
	test_n_is_negative
		segmentation core dumped. EXPECTED! */
void	test_ft_bzero(void)
{
	test_n_is_equal_to_string();
	test_string_index_is_negative();
	//test_n_is_bigger_than_string();
	//test_n_is_negative();
}
