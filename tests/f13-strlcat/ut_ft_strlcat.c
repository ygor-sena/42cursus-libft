/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strlcat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 02:37:58 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 04:04:22 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "../../libft/libft.h"
#include <assert.h>

/* Size s1: 8
	Size s2: 25
	Size s3: 8
	Size s4: 25 */
static void	test_dst_str_is_bigger_than_size(void)
{
	char	s1[] = "This is ";
	char	s2[] = "a potentially long string";
	char	s3[] = "This is ";
	char	s4[] = "a potentially long string";
	int		total_length1;
	int		total_length2;
	size_t	size;
	char	buffer1[9];
	char	buffer2[9];

	size = 3;
	strcpy(buffer1, s1);
	strcpy(buffer2, s3);
	total_length1 = ft_strlcat(buffer1, s2, size);
	total_length2 = strlcat(buffer2, s4, size);
	printf("FT dst content: '%s'\n", buffer1);
	printf("CC dst content: '%s'\n", buffer2);
	printf("Length (ft/std): %d | %d\n", total_length1, total_length2);
	assert(total_length1 == total_length2);
	assert(strcmp(buffer1, buffer2) == 0);
	printf("\e[46m\e[1;37m ft_strlcat \033[0m ");
	printf("\e[42m\e[1;37m test_dst_str_is_bigger_than_size: OK! \033[0m\n\n");
}

static void	test_if_null_term_is_appended(void)
{
	char	s1[] = "This is ";
	char	s2[] = "a potentially long string";
	char	s3[] = "This is ";
	char	s4[] = "a potentially long string";
	int		total_length1;
	int		total_length2;
	size_t	size;
	char	buffer1[33];
	char	buffer2[33];

	size = 33;
	strcpy(buffer1, s1);
	strcpy(buffer2, s3);
	total_length1 = ft_strlcat(buffer1, s2, size);
	total_length2 = strlcat(buffer2, s4, size);
	printf("FT dst content: '%s'\n", buffer1);
	printf("CC dst content: '%s'\n", buffer2);
	printf("Length (ft/std): %d | %d\n", total_length1, total_length2);
	assert(total_length1 == total_length2);
	assert(strcmp(buffer1, buffer2) == 0);
	printf("\e[46m\e[1;37m ft_strlcat \033[0m ");
	printf("\e[42m\e[1;37m test_if_null_term_is_appended: OK! \033[0m\n\n");
}

static void	test_size_bigger_than_sum_strings(void)
{
	char	s1[] = "This is ";
	char	s2[] = "a potentially long string";
	char	s3[] = "This is ";
	char	s4[] = "a potentially long string";
	int		total_length1;
	int		total_length2;
	size_t	size;
	char	buffer1[40];
	char	buffer2[40];

	size = 40;
	strcpy(buffer1, s1);
	strcpy(buffer2, s3);
	total_length1 = ft_strlcat(buffer1, s2, size);
	total_length2 = strlcat(buffer2, s4, size);
	printf("FT dst content: '%s'\n", buffer1);
	printf("CC dst content: '%s'\n", buffer2);
	printf("Length (ft/std): %d | %d\n", total_length1, total_length2);
	assert(total_length1 == total_length2);
	assert(strcmp(buffer1, buffer2) == 0);
	printf("\e[46m\e[1;37m ft_strlcat \033[0m ");
	printf("\e[42m\e[1;37m test_size_bigger_than_sum_strings: OK! \033[0m\n\n");
}

static void	test_size_is_negative_param(void)
{
	char	s1[] = "This is ";
	char	s2[] = "a potentially long string";
	char	s3[] = "This is ";
	char	s4[] = "a potentially long string";
	int		total_length1;
	int		total_length2;
	size_t	size;
	char	buffer1[40];
	char	buffer2[40];

	size = -191;
	strcpy(buffer1, s1);
	strcpy(buffer2, s3);
	total_length1 = ft_strlcat(buffer1, s2, size);
	total_length2 = strlcat(buffer2, s4, size);
	printf("FT dst content: '%s'\n", buffer1);
	printf("CC dst content: '%s'\n", buffer2);
	printf("Length (ft/std): %d | %d\n", total_length1, total_length2);
	assert(total_length1 == total_length2);
	assert(strcmp(buffer1, buffer2) == 0);
	printf("\e[46m\e[1;37m ft_strlcat \033[0m ");
	printf("\e[42m\e[1;37m test_size_is_negative_param: OK! \033[0m\n\n");
}

void	test_ft_strlcat(void)
{
	test_dst_str_is_bigger_than_size();
	test_if_null_term_is_appended();
	test_size_bigger_than_sum_strings();
	test_size_is_negative_param();
}
