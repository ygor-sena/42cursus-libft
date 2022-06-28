/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_memchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:03:50 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:00:11 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_char_is_found(void)
{
	char	*str_exp = "bonjourno";
	char	str_tst[11] = "bonjourno";
	int		to_find;
	int		size;
	char	*expected;
	char	*test;

	to_find = 'n';
	size = 10;
	expected = memchr(str_exp, to_find, size);
	test = ft_memchr(str_tst, to_find, size);
	printf("CC: %s\n", expected);
	printf("FT: %s\n", test);
	assert(strcmp(expected, test) == 0);
	printf("\e[46m\e[1;37m ft_memchr \033[0m ");
	printf("\e[42m\e[1;37m test_char_is_found: OK! \033[0m\n\n");
}

static void	test_char_is_not_found(void)
{
	char	str_exp[11] = "bonjourno";
	char	str_tst[11] = "bonjourno";
	int		to_find;
	int		size;
	char	*expected;
	char	*test;

	to_find = 'n';
	size = 2;
	expected = memchr(str_exp, to_find, size);
	test = ft_memchr(str_tst, to_find, size);
	printf("CC: %s\n", expected);
	printf("FT: %s\n", test);
	assert(expected == test);
	printf("\e[46m\e[1;37m ft_memchr \033[0m ");
	printf("\e[42m\e[1;37m test_char_is_not_found: OK! \033[0m\n\n");
}

/* static void	test_s_is_null(void)
{
	void	*str_exp = NULL;
	void	*str_tst = NULL;
	int		to_find;
	int		size;
	char	*expected;
	char	*test;

	to_find = '0';
	size = 10;
	expected = memchr(str_exp, to_find, size);
	test = ft_memchr(str_tst, to_find, size);
	printf("CC: %s\n", expected);
	printf("FT: %s\n", test);
	assert(expected == test);
	printf("\e[46m\e[1;37m ft_memchr \033[0m ");
	printf("\e[42m\e[1;37m test_s_is_null: OK! \033[0m\n\n");
} */

/* 	test_null_cpy
	Original function gives segmentation fault when
	str is null, so is mine */
void	test_ft_memchr(void)
{
	test_char_is_found();
	test_char_is_not_found();
	//test_s_is_null();
}
