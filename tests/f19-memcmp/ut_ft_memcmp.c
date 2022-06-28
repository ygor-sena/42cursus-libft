/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_memcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:15:49 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:05:14 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_memory_is_equal(void)
{
	char	expected[10] = "0c23456789";
	char	test[10] = "0c23456789";
	size_t	size;

	size = 2;
	printf("CC: %d\n", memcmp(expected, test, size));
	printf("FT: %d\n", ft_memcmp(expected, test, size));
	assert(memcmp(expected, test, size) == ft_memcmp(expected, test, size));
	printf("\e[46m\e[1;37m ft_memcmp \033[0m ");
	printf("\e[42m\e[1;37m test_memory_is_equal: OK! \033[0m\n\n");
}

static void	test_s1_is_less_than_s2(void)
{
	char	expected[10] = "0c03456789";
	char	test[10] = "0cz3456789";
	size_t	size;

	size = 5;
	printf("CC: %d\n", memcmp(expected, test, size));
	printf("FT: %d\n", ft_memcmp(expected, test, size));
	assert(memcmp(expected, test, size) < 0); 
	assert(ft_memcmp(expected, test, size) < 0);
	printf("\e[46m\e[1;37m ft_memcmp \033[0m ");
	printf("\e[42m\e[1;37m test_s1_is_less_than_s2: OK! \033[0m\n\n");
}

static void	test_s1_is_greater_than_s2(void)
{
	char	expected[10] = "0cz3456789";
	char	test[10] = "0c03456789";
	size_t	size;	

	size = 5;
	printf("CC: %d\n", memcmp(expected, test, size));
	printf("FT: %d\n", ft_memcmp(expected, test, size));
	assert(memcmp(expected, test, size) > 0); 
	assert(ft_memcmp(expected, test, size) > 0);
	printf("\e[46m\e[1;37m ft_memcmp \033[0m ");
	printf("\e[42m\e[1;37m test_s1_is_greater_than_s2: OK! \033[0m\n\n");
}

static void	test_libfttester_5(void)
{
	char	expected[] = {0, 0, 127, 0};
	char	test[] = {0, 0, 42, 0};
	size_t	size;
	
	size = 5;
	printf("CC: %d\n", memcmp(expected, test, size));
	printf("FT: %d\n", ft_memcmp(expected, test, size));
	assert(memcmp(expected, test, size) > 0); 
	assert(ft_memcmp(expected, test, size) > 0);
	printf("\e[46m\e[1;37m ft_memcmp \033[0m ");
	printf("\e[42m\e[1;37m test_libfttester_5: OK! \033[0m\n\n");
}

/* static void	test_string_is_null(void)
{
	char	*expected = NULL;
	char	test[10] = "0c03456789";
	size_t	size;
	
	size = 5;
	printf("CC: %d\n", memcmp(expected, test, size));
	printf("FT: %d\n", ft_memcmp(expected, test, size));
	printf("\e[46m\e[1;37m ft_memcmp \033[0m ");
	printf("\e[42m\e[1;37m test_string_is_null: OK! \033[0m\n\n");
} */

/* 	test_null_cpy
	Original function gives segmentation fault when
	str is null, so is mine */
void	test_ft_memcmp(void)
{
	test_memory_is_equal();
	test_s1_is_less_than_s2();
	test_s1_is_greater_than_s2();
	test_libfttester_5();
	//test_string_is_null();
}
