/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_isalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:41:36 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 18:23:10 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_is_alpha_return(void)
{
	int	test_c;

	test_c = 65;
	while (test_c <= 90)
	{	
		printf("ASCII case tests (ascii/ft/glibc): %c | %d | %d\n",
			test_c, ft_isalpha(test_c), isalpha(test_c));
		assert(ft_isalpha(test_c) > 0);
		test_c++;
	}
	test_c = 97;
	while (test_c <= 122)
	{	
		printf("ASCII case tests (ascii/ft/glibc): %c | %d | %d\n",
			test_c, ft_isalpha(test_c), isalpha(test_c));
		assert(ft_isalpha(test_c) > 0);
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_isalpha \033[0m ");
	printf("\e[42m\e[1;37m test_ascii_table_return: OK! \033[0m\n\n");
}

void	test_ft_isalpha(void)
{
	test_is_alpha_return();
}
