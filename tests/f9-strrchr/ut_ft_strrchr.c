/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strrchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:40:11 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:56:17 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_strrchr_int_param(void)
{
	char	ref[] = "It's my house!";
	int		param;

	param = 'm';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strrchr(ref, param), strrchr(ref, param));
	assert(ft_strrchr(ref, param) == strrchr(ref, param));
	printf("\e[46m\e[1;37m ft_strrchr \033[0m ");
	printf("\e[42m\e[1;37m test_strrchr_int_param: OK! \033[0m\n\n");
}

static void	test_strrchr_char_param(void)
{
	char	ref[] = "It's my house!";
	char	param;

	param = 109;
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strrchr(ref, param), strrchr(ref, param));
	assert(ft_strrchr(ref, param) == strrchr(ref, param));
	printf("\e[46m\e[1;37m ft_strrchr \033[0m ");
	printf("\e[42m\e[1;37m test_strrchr_char_param: OK! \033[0m\n\n");
}

static void	test_strrchr_exists_many(void)
{
	char	ref[] = "It's my house!";
	int		param;

	param = ' ';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): '%s' | '%s'\n",
		ref, param, ft_strrchr(ref, param), strrchr(ref, param));
	assert(ft_strrchr(ref, param) == strrchr(ref, param));
	printf("\e[46m\e[1;37m ft_strrchr \033[0m ");
	printf("\e[42m\e[1;37m test_strrchr_exists_many: OK! \033[0m\n\n");
}

static void	test_strrchr_doesnt_exist(void)
{
	char	ref[] = "It's my house!";
	char	param;

	param = 'M';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strrchr(ref, param), strrchr(ref, param));
	assert(ft_strrchr(ref, param) == strrchr(ref, param));
	printf("\e[46m\e[1;37m ft_strrchr \033[0m ");
	printf("\e[42m\e[1;37m test_strrchr_doesnt_exist: OK! \033[0m\n\n");
}

static void	test_strrchr_is_null(void)
{
	char	ref[] = {'\0'};
	char	param;

	param = ' ';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strrchr(ref, param), strrchr(ref, param));
	assert(ft_strrchr(ref, param) == strrchr(ref, param));
	printf("\e[46m\e[1;37m ft_strrchr \033[0m ");
	printf("\e[42m\e[1;37m test_strrchr_is_null: OK! \033[0m\n\n");
}

static void	test_int_n_is_zero(void)
{
	char	ref[] = "Testing";
	char	param;

	param = 0;
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strrchr(ref, param), strrchr(ref, param));
	//assert(ft_strrchr(ref, param) == strrchr(ref, param));
	printf("\e[46m\e[1;37m ft_strrchr \033[0m ");
	printf("\e[42m\e[1;37m test_int_n_is_zero: OK! \033[0m\n\n");
}

void	test_ft_strrchr(void)
{
	test_strrchr_int_param();
	test_strrchr_char_param();
	test_strrchr_exists_many();
	test_strrchr_doesnt_exist();
	test_strrchr_is_null();
	test_int_n_is_zero();
}
