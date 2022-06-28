/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_isascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 03:03:29 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 18:18:35 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_ft_isascii_return(void)
{
	int	test_c;

	test_c = 0;
	while (test_c <= 127)
	{	
		printf("ASCII case tests (ft/std): %c | %d | %d\n",
			test_c, ft_isascii(test_c), isascii(test_c));
		assert(ft_isascii(test_c) > 0);
		test_c++;
	}
	printf("\n\e[46m\e[1;37m ft_isascii \033[0m ");
	printf("\e[42m\e[1;37m test_ft_isascii_return: OK! \033[0m\n\n");
}

void	test_ft_isascii(void)
{
	test_ft_isascii_return();
}
