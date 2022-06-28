/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 03:05:38 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:56:59 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_n_is_null(void)
{
	char	s1[] = "ABCDEFGHIJ";
	char	s2[] = "ABCDEFGhIJ";
	int		n;

	n = 0;
	printf("String 1: %s\nString 2: %s\nLength to search: %d\n"
		"Result (ft/std): %d | %d\n",
		s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	assert(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
	printf("\e[46m\e[1;37m ft_strncmp \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_null: OK! \033[0m\n\n");
}

static void	test_n_is_negative(void)
{
	char	s1[] = "ABCDEFGHIJ";
	char	s2[] = "ABCDEFGHIJ";
	int		n;

	n = -5;
	printf("String 1: %s\nString 2: %s\nLength to search: %d\n"
		"Result (ft/std): %d | %d\n",
		s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	assert(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
	printf("\e[46m\e[1;37m ft_strncmp \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_negative: OK! \033[0m\n\n");
}

static void	test_s1_is_null(void)
{
	char	s1[] = {'\0'};
	char	s2[] = "ABCDEFGhIJ";
	int		n;

	n = 0;
	printf("String 1: %s\nString 2: %s\nLength to search: %d\n"
		"Result (ft/std): %d | %d\n",
		s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	assert(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
	printf("\e[46m\e[1;37m ft_strncmp \033[0m ");
	printf("\e[42m\e[1;37m test_s1_is_null: OK! \033[0m\n\n");
}

static void	test_normal_n_size(void)
{
	char	s1[] = "ABCDEFGHIJ";
	char	s2[] = "ABCDEFGhIJ";
	int		n;

	n = 42;
	printf("String 1: %s\nString 2: %s\nLength to search: %d\n"
		"Result (ft/std): %d | %d\n",
		s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	assert(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
	printf("\e[46m\e[1;37m ft_strncmp \033[0m ");
	printf("\e[42m\e[1;37m test_normal_n_size: OK! \033[0m\n\n");
}

static void	test_n_bigger_than_strings_size(void)
{
	char	s1[] = "ABCDEFGHIJ";
	char	s2[] = "ABCDEFGhIJ";
	int		n;

	n = 9;
	printf("String 1: %s\nString 2: %s\nLength to search: %d\n"
		"Result (ft/std): %d | %d\n",
		s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	assert(ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
	printf("\e[46m\e[1;37m ft_strncmp \033[0m ");
	printf("\e[42m\e[1;37m test_n_bigger_than_strings_size: OK! \033[0m\n\n");
}

void	test_ft_strncmp(void)
{
	test_n_is_null();
	test_n_is_negative();
	test_s1_is_null();
	test_normal_n_size();
	test_n_bigger_than_strings_size();
}