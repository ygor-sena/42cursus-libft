/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_calloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:20:49 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:12:15 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "../../libft/libft.h"

static void	test_integer_overflow(void)
{
	size_t	nmemb;
	size_t	size;
	char	*arr;

	nmemb = 70000;
	size = 70000;
	arr = (char *) ft_calloc(nmemb, size);
	assert(arr == 0);
	free(arr);
	printf("\e[46m\e[1;37m ft_calloc \033[0m ");
	printf("\e[42m\e[1;37m test_integer_overflow: OK! \033[0m\n\n");
}

static void	test_negative_size(void)
{
	size_t	nmemb;
	size_t	size;
	char	*arr;

	nmemb = 70000;
	size = -1;
	arr = (char *) ft_calloc(nmemb, size);
	assert(arr == 0);
	free(arr);
	printf("\e[46m\e[1;37m ft_calloc \033[0m ");
	printf("\e[42m\e[1;37m test_negative_size: OK! \033[0m\n\n");
}

static void	test_nmemb_is_zero(void)
{
	size_t	nmemb;
	size_t	size;
	char	*arr;

	nmemb = 0;
	size = 70000;
	arr = (char *) ft_calloc(nmemb, size);
	assert(arr == 0);
	free(arr);
	printf("\e[46m\e[1;37m ft_calloc \033[0m ");
	printf("\e[42m\e[1;37m test_nmemb_is_zero: OK! \033[0m\n\n");
}

static void	test_successfully_alloc(void)
{
	size_t	nmemb;
	size_t	size;
	char	*ft_arr;
	char	*cc_arr;

	nmemb = 25;
	size = 4;
	ft_arr = (char *) ft_calloc(nmemb, size);
	cc_arr = (char *) calloc(nmemb, size);
	assert(strcmp(ft_arr, cc_arr) == 0);
	free(ft_arr);
	free(cc_arr);
	printf("\e[46m\e[1;37m ft_calloc \033[0m ");
	printf("\e[42m\e[1;37m test_successfully_alloc: OK! \033[0m\n\n");
}

void	test_ft_calloc(void)
{
	test_integer_overflow();
	test_negative_size();
	test_nmemb_is_zero();
	test_successfully_alloc();
}
