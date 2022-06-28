/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_isalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 02:22:31 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 18:20:53 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_ft_isalnum_return(void)
{
	int	test_c;

	test_c = 48;
	while (test_c <= 57)
	{
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_isalnum(test_c), isalnum(test_c));
		assert(ft_isalnum(test_c) > 0);
		test_c++;
	}
	test_c = 65;
	while (test_c <= 90)
	{
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_isalnum(test_c), isalnum(test_c));
		assert(ft_isalnum(test_c) > 0);
		test_c++;
	}
	test_c = 97;
	while (test_c <= 122)
	{
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_isalnum(test_c), isalnum(test_c));
		assert(ft_isalnum(test_c) > 0);
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_isalnum \033[0m ");
	printf("\e[42m\e[1;37m test_ft_isalnum_return: OK! \033[0m\n\n");
}

void	test_ft_isalnum(void)
{
	test_ft_isalnum_return();
}
