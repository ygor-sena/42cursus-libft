/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_memset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:45:22 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:59:49 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_n_is_equal_to_string(void)
{
	char	str1[50] = "42 characters";
	char	str2[50] = "42 characters";
	size_t	size;
	int		c_to_write;

	size = 13 * sizeof(char);
	c_to_write = '.';
	printf("Before memset(ft):  %s\n", str1);
	printf("Before memset(std): %s\n", str2);
	printf("After memset(ft):  %s\n", str1);
	printf("After memset(std): %s\n", str2);
	assert(strcmp((char *)ft_memset(str1, c_to_write, size),
			(char *)memset(str2, c_to_write, size)) == 0);
	printf("\e[46m\e[1;37m ft_memset \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_equal_to_string: OK! \033[0m\n\n");
}

static void	test_write_char_in_string(void)
{
	char	str1[50] = "42 characters";
	char	str2[50] = "42 characters";
	size_t	size;
	int		c_to_write;

	size = 13 * sizeof(char);
	c_to_write = 'a';
	printf("Before memset(ft):  %s\n", str1);
	printf("Before memset(std): %s\n", str2);
	printf("After memset(ft):  %s\n", str1);
	printf("After memset(std): %s\n", str2);
	assert(strcmp((char *)ft_memset(str1, c_to_write, size),
			(char *)memset(str2, c_to_write, size)) == 0);
	printf("\e[46m\e[1;37m ft_memset \033[0m ");
	printf("\e[42m\e[1;37m test_write_char_in_string: OK! \033[0m\n\n");
}

static void	test_string_index_is_negative(void)
{
	char	str1[50] = "";
	char	str2[50] = "";
	size_t	size;
	int		c_to_write;

	size = 8 * sizeof(char);
	c_to_write = '.';
	printf("\nBefore memset(ft):  %s\n", str1);
	printf("Before memset(std): %s\n", str2);
	printf("After memset(ft):  %s\n", str1);
	printf("After memset(std): %s\n", str2);
	assert(strcmp((char *)ft_memset(str1, c_to_write, size),
			(char *)memset(str2, c_to_write, size)) == 0);
	printf("\e[46m\e[1;37m ft_memset \033[0m ");
	printf("\e[42m\e[1;37m test_string_index_is_negative: OK! \033[0m\n\n");
}

/* static void	test_n_is_bigger_than_string(void)
{
	char	str2[50] = "42 characters";
	char	str1[50] = "42 characters";
	size_t	size;
	int		c_to_write;

	size = 75 * sizeof(char);
	c_to_write = '.';
	printf("\nBefore memset(ft):  %s\n", str1);
	printf("Before memset(std): %s\n", str2);
	assert(strcmp((char *)ft_memset(str1, c_to_write, size),
			(char *)memset(str2, c_to_write, size)));
	printf("After memset(ft):  %s\n", str1);
	printf("After memset(std): %s\n", str2);
	printf("\e[46m\e[1;37m ft_memset \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_bigger_than_string: OK! \033[0m\n\n");
} */

/* static void	test_n_is_negative(void)
{
	char	str1[50] = "42 characters";
	char	str2[50] = "42 characters";
	size_t	size;
	int		c_to_write;

	size = -10;
	c_to_write = '.';
	printf("Before memset(ft):  %s\n", str1);
	printf("Before memset(std): %s\n", str2);
	assert(strcmp((char *)ft_memset(str1, c_to_write, size),
			(char *)memset(str2, c_to_write, size)));
	printf("After memset(ft):  %s\n", str1);
	printf("After memset(std): %s\n", str2);
	printf("\e[46m\e[1;37m ft_memset \033[0m ");
	printf("\e[42m\e[1;37m test_n_is_negative: OK! \033[0m\n\n");
} */

/*	test_n_is_bigger_than_string
		stack smashing detected. EXPECTED!
	test_n_is_negative
		segmentation core dumped. EXPECTED!*/
void	test_ft_memset(void)
{
	test_n_is_equal_to_string();
	test_write_char_in_string();
	test_string_index_is_negative();
	//test_n_is_bigger_than_string();
	//test_n_is_negative();
}