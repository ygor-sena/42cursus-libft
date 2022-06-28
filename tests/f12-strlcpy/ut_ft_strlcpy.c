/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strlcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:06:59 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:58:52 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "../../libft/libft.h"
#include <assert.h>

static void	test_cpy_success_18_plus_null_byte(void)
{
	char	test_src1[] = "Teste Todos, Elvin";
	char	test_src2[] = "Teste Todos, Elvin";
	char	test_dest1[19];
	char	test_dest2[19];
	size_t	length1;
	size_t	length2;
	size_t	size;

	length1 = 0;
	length2 = 0;
	size = 19;
	printf("Before Source: '%s' | '%s'\n", test_src1, test_src2);
	printf("Before Destiny: '%s' | '%s'\n", test_dest1, test_dest2);
	length1 = ft_strlcpy(test_dest1, test_src1, size);
	length2 = strlcpy(test_dest2, test_src2, size);
	printf("Source length (ft/std): %ld | %ld\n", length1, length2);
	printf("After Source (ft/std): '%s' | '%s'\n", test_src1, test_src2);
	printf("After Destiny (ft/std): '%s' | '%s'\n", test_dest1, test_dest2);
	assert(strcmp(test_dest1, test_dest2) == 0);
	printf("\e[46m\e[1;37m ft_strlcpy \033[0m ");
	printf("\e[42m\e[1;37m test_cpy_success_18_plus_null_byte: OK! \033[0m\n\n");
}

static void	test_cpy_success_17_chars_to_null_term(void)
{
	char	test_src1[] = "Teste Todos, Elvin";
	char	test_src2[] = "Teste Todos, Elvin";
	char	test_dest1[19];
	char	test_dest2[19];
	size_t	length1;
	size_t	length2;
	size_t	size;

	length1 = 0;
	length2 = 0;
	size = 18;
	printf("Before Source: '%s' | '%s'\n", test_src1, test_src2);
	printf("Before Destiny: '%s' | '%s'\n", test_dest1, test_dest2);
	length1 = ft_strlcpy(test_dest1, test_src1, size);
	length2 = strlcpy(test_dest2, test_src2, size);
	printf("Source length (ft/std): %ld | %ld\n", length1, length2);
	printf("After Source (ft/std): '%s' | '%s'\n", test_src1, test_src2);
	printf("After Destiny (ft/std): '%s' | '%s'\n", test_dest1, test_dest2);
	assert(strcmp(test_dest1, test_dest2) == 0);
	printf("\e[46m\e[1;37m ft_strlcpy \033[0m ");
	printf("\e[42m\e[1;37m test_cpy_success_17_chars_to_null_term: OK! \033[0m\n\n");
}

static void	test_cpy_halfway(void)
{
	char	test_src1[] = "Teste Todos, Elvin";
	char	test_src2[] = "Teste Todos, Elvin";
	char	test_dest1[19];
	char	test_dest2[19];
	size_t	length1;
	size_t	length2;
	size_t	size;

	length1 = 0;
	length2 = 0;
	size = 10;
	printf("Before Source: '%s' | '%s'\n", test_src1, test_src2);
	printf("Before Destiny: '%s' | '%s'\n", test_dest1, test_dest2);
	length1 = ft_strlcpy(test_dest1, test_src1, size);
	length2 = strlcpy(test_dest2, test_src2, size);
	printf("Source length (ft/std): %ld | %ld\n", length1, length2);
	printf("After Source (ft/std): '%s' | '%s'\n", test_src1, test_src2);
	printf("After Destiny (ft/std): '%s' | '%s'\n", test_dest1, test_dest2);
	assert(strcmp(test_dest1, test_dest2) == 0);
	printf("\e[46m\e[1;37m ft_strlcpy \033[0m ");
	printf("\e[42m\e[1;37m test_cpy_halfway: OK! \033[0m\n\n");
}

static void	test_case_only_one_byte(void)
{
	char	test_src1[] = "Teste Todos, Elvin";
	char	test_src2[] = "Teste Todos, Elvin";
	char	test_dest1[19];
	char	test_dest2[19];
	size_t	length1;
	size_t	length2;
	size_t	size;

	length1 = 0;
	length2 = 0;
	size = 1;
	printf("Before Source: '%s' | '%s'\n", test_src1, test_src2);
	printf("Before Destiny: '%s' | '%s'\n", test_dest1, test_dest2);
	length1 = ft_strlcpy(test_dest1, test_src1, size);
	length2 = strlcpy(test_dest2, test_src2, size);
	printf("Source length (ft/std): %ld | %ld\n", length1, length2);
	printf("After Source (ft/std): '%s' | '%s'\n", test_src1, test_src2);
	printf("After Destiny (ft/std): '%s' | '%s'\n", test_dest1, test_dest2);
	assert(strcmp(test_dest1, test_dest2) == 0);
	printf("\e[46m\e[1;37m ft_strlcpy \033[0m ");
	printf("\e[42m\e[1;37m test_case_only_one_byte: OK! \033[0m\n\n");
}

static void	test_no_byte_for_null(void)
{
	char	test_src1[] = "Teste Todos, Elvin";
	char	test_src2[] = "Teste Todos, Elvin";
	char	test_dest1[19];
	char	test_dest2[19];
	size_t	length1;
	size_t	length2;
	size_t	size;

	length1 = 0;
	length2 = 0;
	size = 0;
	printf("Before Source: '%s' | '%s'\n", test_src1, test_src2);
	printf("Before Destiny: '%s' | '%s'\n", test_dest1, test_dest2);
	length1 = ft_strlcpy(test_dest1, test_src1, size);
	length2 = strlcpy(test_dest2, test_src2, size);
	printf("Source length (ft/std): %ld | %ld\n", length1, length2);
	printf("After Source (ft/std): '%s' | '%s'\n", test_src1, test_src2);
	printf("After Destiny (ft/std): '%s' | '%s'\n", test_dest1, test_dest2);
	assert(strcmp(test_dest1, test_dest2) == 0);
	printf("\e[46m\e[1;37m ft_strlcpy \033[0m ");
	printf("\e[42m\e[1;37m test_no_byte_for_null: OK! \033[0m\n\n");
}

void	test_ft_strlcpy(void)
{
	test_cpy_success_18_plus_null_byte();
	test_cpy_success_17_chars_to_null_term();
	test_cpy_halfway();
	test_case_only_one_byte();
	test_no_byte_for_null();
}