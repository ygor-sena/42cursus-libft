/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_isdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:52:08 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 18:10:26 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_is_digit_return(void)
{
	int	test_c;

	test_c = 48;
	while (test_c <= 57)
	{	
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_isdigit(test_c), isdigit(test_c));
		assert(ft_isdigit(test_c) > 0);
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_isdigit \033[0m ");
	printf("\e[42m\e[1;37m test_is_digit_return: OK! \033[0m\n\n");
}

void	test_ft_isdigit(void)
{
	test_is_digit_return();
}