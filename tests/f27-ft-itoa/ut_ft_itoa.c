/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:39:42 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:46:25 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_n_is_positive(void)
{
	int		test;
	char	*result;
	char	expected[] = "424242";

	test = 424242;
	result = ft_itoa(test);
	assert(strcmp(result, expected) == 0);
	printf("Result: %s | Expect: %s\n", result, expected);
	printf("\e[46m\e[1;37m ft_itoa \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_positive: OK! \033[0m\n\n");
}

static void	test_n_is_negative(void)
{
	int		test;
	char	*result;
	char	expected[] = "-424242";

	test = -424242;
	result = ft_itoa(test);
	assert(strcmp(result, expected) == 0);
	printf("Result: %s | Expect: %s\n", result, expected);
	printf("\e[46m\e[1;37m ft_itoa \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_negative: OK! \033[0m\n\n");
}

static void	test_n_is_zero(void)
{
	int		test;
	char	*result;
	char	expected[] = "0";

	test = 0;
	result = ft_itoa(test);
	assert(strcmp(result, expected) == 0);
	printf("Result: %s | Expect: %s\n", result, expected);
	printf("\e[46m\e[1;37m ft_itoa \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_zero: OK! \033[0m\n\n");
}

static void	test_n_int_min(void)
{
	int		test;
	char	*result;
	char	expected[] = "-2147483648";

	test = -2147483648;
	result = ft_itoa(test);
	printf("Result: %s | Expect: %s\n", result, expected);
	assert(strcmp(result, expected) == 0);
	printf("\e[46m\e[1;37m ft_itoa \033[0m ");
	printf("\e[42m\e[1;37m test_n_int_min: OK! \033[0m\n\n");
}

static void	test_n_int_max(void)
{
	int		test;
	char	*result;
	char	expected[] = "2147483647";

	test = 2147483647;
	result = ft_itoa(test);
	printf("Result: %s | Expect: %s\n", result, expected);
	assert(strcmp(result, expected) == 0);
	printf("\e[46m\e[1;37m ft_itoa \033[0m ");
	printf("\e[42m\e[1;37m test_n_int_max: OK! \033[0m\n\n");
}

void	test_ft_itoa(void)
{
	test_n_is_positive();
	test_n_is_negative();
	test_n_is_zero();
	test_n_int_min();
	test_n_int_max();
}
