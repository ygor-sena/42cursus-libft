/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strmapi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:09:27 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:49:00 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static	char	y_is_the_way(unsigned int i, char c);

static void	test_strmapi_successfully(void)
{
	char	*test = "Testing";
	char	*result = ft_strmapi(test, y_is_the_way);
	char	*expected = "YYYYYYY";

	printf("Result: %s\nExpect: %s\n", result, expected);
	assert(strcmp(result, expected) == 0);
	free(result);
	printf("\e[46m\e[1;37m ft_strmapi \033[0m ");
	printf("\e[42m\e[1;37m test_strmapi_successfully: OK! \033[0m\n\n");
}

static void	test_str_is_null(void)
{
	char	*test = NULL;
	char	*result = ft_strmapi(test, y_is_the_way);
	char	*expected = NULL;
	
	printf("Result: %s\nExpect: %s\n", result, expected);
	assert(result == expected);
	free(result);
	printf("\e[46m\e[1;37m ft_strmapi \033[0m ");
	printf("\e[42m\e[1;37m test_str_is_null: OK! \033[0m\n\n");
}

static	char	y_is_the_way(__attribute__((unused)) unsigned int i, char c)
{
	c = 'Y';
	return (c);
}

void	test_ft_strmapi(void)
{
	test_strmapi_successfully();
	test_str_is_null();
}
