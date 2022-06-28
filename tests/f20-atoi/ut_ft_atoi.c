/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 00:22:50 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 16:01:29 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_atoi_successfully(void)
{
	char	string[] = "  ---+--+1234ab567";
	int		nb;
	int		nb2;

	nb = atoi(string);
	printf("cc: %i\n", nb);
	nb2 = ft_atoi(string);
	printf("my: %i\n", nb2);
	assert(nb == nb2);
	printf("\e[46m\e[1;37m ft_atoi \033[0m ");
	printf("\e[42m\e[1;37m test_atoi_successfully: OK! \033[0m\n\n");
}

static void	test_double_neg_sign(void)
{
	char	*string = "--42";
	int		nb;
	int		nb2;

	nb = atoi(string);
	printf("cc: %i\n", nb);
	nb2 = ft_atoi(string);
	printf("my: %i\n", nb2);
	assert(nb == nb2);
	printf("\e[46m\e[1;37m ft_atoi \033[0m ");
	printf("\e[42m\e[1;37m test_double_neg_sign: OK! \033[0m\n\n");
}

/* static void	test_null_string(void)
{
	char	*string = NULL;
	int		nb;
	//int		nb2;

	nb = atoi(string);
	printf("cc: %i\n", nb);
	//nb2 = ft_atoi(string);
	//printf("my: %i\n", nb2);
	printf("\e[46m\e[1;37m ft_atoi \033[0m ");
	printf("\e[42m\e[1;37m test_null_string: OK! \033[0m\n\n");
} */

/* 	test_null_string
	Original function gives segmentation fault when
	str is null, so is mine */
void	test_ft_atoi(void)
{
	test_atoi_successfully();
	test_double_neg_sign();
	//test_null_string();
}
