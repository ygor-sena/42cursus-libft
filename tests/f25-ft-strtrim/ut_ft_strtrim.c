/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 00:44:43 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:31:54 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_strtrim_successfully(void)
{
	char	s1[] = " strtr im ";
	char	set[] = "m s i ";
	char	expected[] = "trtr";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("Result: '%s' | Expected: '%s'\n", result, expected);
	assert(strcmp(result, expected) == 0);
	printf("\e[46m\e[1;37m ft_strtrim \033[0m ");
	printf("\e[42m\e[1;37m test_strtrim_successfully: OK! \033[0m\n\n");
}

static void	test_s1_is_null(void)
{
	char	*s1 = NULL;
	char	set[] = "m s i ";
	char	*expected = NULL;
	char	*result;

	result = ft_strtrim(s1, set);
	printf("Result: '%s' | Expected: '%s'\n", result, expected);
	assert(result == expected);
	printf("\e[46m\e[1;37m ft_strtrim \033[0m ");
	printf("\e[42m\e[1;37m test_s1_is_null: OK! \033[0m\n\n");
}

static void	test_s1_is_empty(void)
{
	char	s1[] = "\0";
	char	set[] = "m s i ";
	char	*expected = "";
	char	*result;

	result = ft_strtrim(s1, set);
	
	printf("Result: '%s' | Expected: '%s'\n", result, expected);
	assert(strcmp(result, expected) == 0);
	printf("\e[46m\e[1;37m ft_strtrim \033[0m ");
	printf("\e[42m\e[1;37m test_s1_is_empty: OK! \033[0m\n\n");
}

static void	test_set_is_empty(void)
{
	char	s1[] = " strtr im ";
	char	*set = "";
	char	*expected = " strtr im ";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("Result: '%s' | Expected: '%s'\n", result, expected);
	assert(strcmp(result, expected) == 0);
	printf("\e[46m\e[1;37m ft_strtrim \033[0m ");
	printf("\e[42m\e[1;37m test_set_is_empty: OK! \033[0m\n\n");
}

void	test_ft_strtrim(void)
{
	test_strtrim_successfully();
	test_s1_is_null();
	test_s1_is_empty();
	test_set_is_empty();
}
