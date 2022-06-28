/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:46:53 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:55:32 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_strchr_int_param(void)
{
	char	ref[] = "It's my house!";
	int		param;

	param = 104;
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strchr(ref, param), strchr(ref, param));
	assert(ft_strchr(ref, param) == strchr(ref, param));
	printf("\e[46m\e[1;37m ft_strchr \033[0m ");
	printf("\e[42m\e[1;37m test_strchr_int_param: OK! \033[0m\n\n");
}

static void	test_strchr_char_param(void)
{
	char	ref[] = "It's my house!";
	char	param;

	param = 'h';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strchr(ref, param), strchr(ref, param));
	assert(ft_strchr(ref, param) == strchr(ref, param));
	printf("\e[46m\e[1;37m ft_strchr \033[0m ");
	printf("\e[42m\e[1;37m test_strchr_char_param: OK! \033[0m\n\n");
}

static void	test_strchr_exists_many(void)
{
	char	ref[] = "It's my house!";
	int		param;

	param = ' ';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): '%s' | '%s'\n",
		ref, param, ft_strchr(ref, param), strchr(ref, param));
	assert(ft_strchr(ref, param) == strchr(ref, param));
	printf("\e[46m\e[1;37m ft_strchr \033[0m ");
	printf("\e[42m\e[1;37m test_strchr_exists_many: OK! \033[0m\n\n");
}

static void	test_strchr_doesnt_exist(void)
{
	char	ref[] = "It's my house!";
	char	param;

	param = 'M';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strchr(ref, param), strchr(ref, param));
	assert(ft_strchr(ref, param) == strchr(ref, param));
	printf("\e[46m\e[1;37m ft_strchr \033[0m ");
	printf("\e[42m\e[1;37m test_strchr_doesnt_exist: OK! \033[0m\n\n");
}

static void	test_strchr_is_null(void)
{
	char	ref[] = {'\0'};
	char	param;

	param = ' ';
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strchr(ref, param), strchr(ref, param));
	assert(ft_strchr(ref, param) == strchr(ref, param));
	printf("\e[46m\e[1;37m ft_strchr \033[0m ");
	printf("\e[42m\e[1;37m test_strchr_is_null: OK! \033[0m\n\n");
}

static void	test_int_c_is_zero(void)
{
	char	ref[] = "tripouille";
	char	param;

	param = 0;
	printf("String: %s\nSearch for: '%c'\nResult (ft/std): %s | %s\n",
		ref, param, ft_strchr(ref, param), strchr(ref, param));
	//assert(ft_strchr(ref, param) == strchr(ref, param));
	printf("\e[46m\e[1;37m ft_strchr \033[0m ");
	printf("\e[42m\e[1;37m test_int_c_is_zero: OK! \033[0m\n\n");
}

void	test_ft_strchr(void)
{
	test_strchr_int_param();
	test_strchr_char_param();
	test_strchr_exists_many();
	test_strchr_doesnt_exist();
	test_strchr_is_null();
	test_int_c_is_zero();
}
