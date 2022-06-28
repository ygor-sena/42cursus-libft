/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_toupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:34:11 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 18:23:45 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <assert.h>
#include <stdio.h>
#include "../../libft/libft.h"

static void	test_ft_is_lowercase(void)
{
	int	test_c;

	test_c = 97;
	while (test_c <= 122)
	{	
		printf("Lowercase tests (ft/std): %c | %d, %c | %d\n",
			test_c, ft_toupper(test_c),
			test_c, toupper(test_c));
		assert(ft_toupper(test_c) > 0);	
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_toupper \033[0m ");
	printf("\e[42m\e[1;37m test_ft_is_lowercase: OK! \033[0m\n\n");
}

static void	test_ft_is_asciicase(void)
{
	int	test_c;

	test_c = 0;
	while (test_c <= 96)
	{	
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_toupper(test_c), toupper(test_c));
		assert(ft_toupper(test_c) == toupper(test_c));
		test_c++;
	}
	test_c = 123;
	while (test_c <= 255)
	{	
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_toupper(test_c), toupper(test_c));
		assert(ft_toupper(test_c) == toupper(test_c));
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_toupper \033[0m ");
	printf("\e[42m\e[1;37m test_ft_is_asciicase: OK! \033[0m\n\n");
}

static void	test_signed_char_compatibility(void)
{
	int	test_c;

	test_c = -128;
	while (test_c < 0)
	{
		printf("Signed char case tests (ft/std): %d | %d | %d\n",
			test_c, ft_toupper(test_c), toupper(test_c));
		assert(ft_toupper(test_c) == toupper(test_c));
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_toupper \033[0m ");
	printf("\e[42m\e[1;37m test_signed_char_compatibility: OK! \033[0m\n\n");
}

void	test_ft_toupper(void)
{
	test_ft_is_lowercase();
	test_ft_is_asciicase();
	test_signed_char_compatibility();
}
