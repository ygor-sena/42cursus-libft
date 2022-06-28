/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_striteri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:05:21 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:51:24 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static	void	y_is_the_way(unsigned int i, char *c);

static void	test_striteri_successfully(void)
{
	char	test[8] = "0123456";
	char	*expected = "YYYYYYY";

	ft_striteri(test, y_is_the_way);
	printf("Result: %s\nExpect: %s\n", test, expected);
	assert(strcmp(test, expected) == 0);
	printf("\e[46m\e[1;37m ft_striteri \033[0m ");
	printf("\e[42m\e[1;37m test_striteri_successfully: OK! \033[0m\n\n");
}

/* static void	test_str_is_null(void)
{
	char	*test = NULL;
	char	*expected = NULL;

	ft_striteri(test, y_is_the_way);
	printf("Result: %s\nExpect: %s\n", test, expected);
	assert(strcmp(test, expected) == 0);
	printf("\e[46m\e[1;37m ft_striteri \033[0m ");
	printf("\e[42m\e[1;37m test_str_is_null: OK! \033[0m\n\n");
} */

static	void	y_is_the_way(__attribute__((unused)) unsigned int i, char *c)
{
	*c = 'Y';
}

/*	test_str_is_null
	To pass this function I need to find a way to abort
		function execution. Segmentation fault EXPECTED! */
void	test_ft_striteri(void)
{
	test_striteri_successfully();
	//test_str_is_null();
}
