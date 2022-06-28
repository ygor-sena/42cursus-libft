/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:40:01 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:27:38 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_strjoin_successfully(void)
{
	char	str1[12] = "0123456789:";
	char	str2[8] = " a test";
	char	expected[19] = "0123456789: a test";
	char	*result;
	int		len;

	result = ft_strjoin(str1, str2);
	len = ft_strlen(result);
	printf("Str1/str2:     '%s' | '%s'\n", str1, str2);
	printf("Joined length:  %d\n", len);
	printf("Joined string: '%s'\n", result);
	assert(strcmp(result, expected) == 0);
	free(result);
	printf("\e[46m\e[1;37m ft_strjoin \033[0m ");
	printf("\e[42m\e[1;37m test_strjoin_successfully: OK! \033[0m\n\n");
}

static void	test_s1_is_null(void)
{
	char	*str1 = NULL;
	char	str2[8] = " a test";
	char	*expected = "";
	char	*result;

	result = ft_strjoin(str1, str2);
	printf("Str1/str2:     '%s' | '%s'\n", str1, str2);
	printf("Joined string: '%s'\n", result);
	assert(strcmp(result, expected) == 0);
	free(result);
	printf("\e[46m\e[1;37m ft_strjoin \033[0m ");
	printf("\e[42m\e[1;37m test_s1_is_null: OK! \033[0m\n\n");
}

static void	test_s2_is_null(void)
{
	char	str1[12] = "0123456789:";
	char	*str2 = NULL;
	char	*expected = "";
	char	*result;

	result = ft_strjoin(str1, str2);
	printf("Str1/str2:     '%s' | '%s'\n", str1, str2);
	printf("Joined string: '%s'\n", result);
	assert(strcmp(result, expected) == 0);
	free(result);
	printf("\e[46m\e[1;37m ft_strjoin \033[0m ");
	printf("\e[42m\e[1;37m test_s2_is_null: OK! \033[0m\n\n");
}

static void	test_both_strings_are_null(void)
{
	char	*str1 = NULL;
	char	*str2 = NULL;
	char	*expected = "";
	char	*result;
	
	result = ft_strjoin(str1, str2);
	printf("Str1/str2:     '%s' | '%s'\n", str1, str2);
	printf("Joined string: '%s'\n", result);
	assert(strcmp(result, expected) == 0);
	free(result);
	printf("\e[46m\e[1;37m ft_strjoin \033[0m ");
	printf("\e[42m\e[1;37m test_both_strings_are_null: OK! \033[0m\n\n");
}

void	test_ft_strjoin(void)
{
	test_strjoin_successfully();
	test_s1_is_null();
	test_s2_is_null();
	test_both_strings_are_null();
}
