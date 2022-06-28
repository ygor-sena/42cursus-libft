/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:40:20 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:19:46 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_cpy_substr_successfully(void)
{
	char			string[5] = "Test";
	char			expected[5] = "Test";
	char			*substr;
	size_t			len;
	unsigned int	start;

	start = 0;
	len = 4;
	substr = ft_substr(string, start, len);
	assert(strcmp(substr, expected) == 0);
	printf("Allocated memory: %ld\n", (len + 1) * sizeof(char));
	printf("test_cpy_substr_successfully: '%s'\n", substr);
	free(substr);
	printf("\e[46m\e[1;37m ft_substr \033[0m ");
	printf("\e[42m\e[1;37m test_cpy_substr_successfully: OK! \033[0m\n\n");
}

static void	test_len_is_bigger_than_string(void)
{
	char			string[5] = "Test";
	char			expected[4] = "st";
	char			*substr;
	size_t			len;
	unsigned int	start;

	start = 2;
	len = 5;
	substr = ft_substr(string, start, len);
	printf("Allocated memory: %ld\n", (len + 1) * sizeof(char));
	printf("test_len_is_bigger_than_string: '%s'\n", substr);
	assert(strcmp(substr, expected) == 0);
	free(substr);
	printf("\e[46m\e[1;37m ft_substr \033[0m ");
	printf("\e[42m\e[1;37m test_len_is_bigger_than_string: OK! \033[0m\n\n");
}

static void	test_len_is_zero(void)
{
	char			string[5] = "Test";
	char			*expected = "";
	char			*substr;
	size_t			len;
	unsigned int	start;

	start = 2;
	len = 0;
	substr = ft_substr(string, start, len);
	printf("Allocated memory: %ld\n", (len + 1) * sizeof(char));
	printf("test_len_is_zero: '%s' | '%s'\n", substr, expected);
	assert(strcmp(substr, expected) == 0);
	free(substr);
	printf("\e[46m\e[1;37m ft_substr \033[0m ");
	printf("\e[42m\e[1;37m test_len_is_zero: OK! \033[0m\n\n");
}

static void	test_malloc_overflow(void)
{
	char			string[5] = "Test";
	char			*expected = "Test";
	char			*substr;
	size_t			len;
	unsigned int	start;

	start = 0;
	len = 214748365000;
	substr = ft_substr(string, start, len);
	printf("test_malloc_overflow: '%s'\n", substr);
	assert(strcmp(substr, expected) == 0);
	free(substr);
	printf("\e[46m\e[1;37m ft_substr \033[0m ");
	printf("\e[42m\e[1;37m test_malloc_overflow: OK! \033[0m\n\n");
}

static void	test_string_is_null(void)
{
	char			*string = NULL;
	char			*expected = NULL;
	char			*substr;
	size_t			len;
	unsigned int	start;

	start = 2;
	len = 2;
	substr = ft_substr(string, start, len);
	printf("test_string_is_null: '%s' | '%s'\n", substr, expected);
	assert(substr == expected);
	free(substr);
	printf("\e[46m\e[1;37m ft_substr \033[0m ");
	printf("\e[42m\e[1;37m test_string_is_null: OK! \033[0m\n\n");
}

void	test_ft_substr(void)
{
	test_cpy_substr_successfully();
	test_len_is_bigger_than_string();
	test_len_is_zero();
	test_malloc_overflow();
	test_string_is_null();
}
