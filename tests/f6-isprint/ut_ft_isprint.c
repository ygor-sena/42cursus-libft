/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_isprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 03:14:16 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 18:24:28 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "../../libft/libft.h"

void	test_ft_isprint_return(void)
{
	int	test_c;

	test_c = 32;
	while (test_c <= 126)
	{
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_isprint(test_c), isprint(test_c));
		assert(ft_isprint(test_c) > 0);
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_isprint \033[0m ");
	printf("\e[42m\e[1;37m test_ft_isprint_return: OK! \033[0m\n\n");
}

void	test_ft_isprint(void)
{
	test_ft_isprint_return();
}
