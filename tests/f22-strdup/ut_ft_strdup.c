/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:45:01 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:14:46 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_strdup_successfully(void)
{
	char to_dup[] = "String to try to dup";
	char *cc_dup = strdup(to_dup);
	char *ft_dup = ft_strdup(to_dup);

	printf("%s\n", cc_dup);
	printf("%s\n", ft_dup);
	assert(strcmp(cc_dup, ft_dup) == 0);
	printf("\e[46m\e[1;37m ft_strdup \033[0m ");
	printf("\e[42m\e[1;37m test_strdup_successfully: OK! \033[0m\n\n");
}

/* static void	str_to_dup_is_null(void)
{
	char *to_dup = NULL;
	char *cc_dup = strdup(to_dup);
	char *ft_dup = ft_strdup(to_dup);

	assert(strcmp(cc_dup, ft_dup) == 0);
	printf("\e[46m\e[1;37m ft_strdup \033[0m ");
	printf("\e[42m\e[1;37m str_to_dup_is_null: OK! \033[0m\n\n");
} */

/* 	str_to_dup_is_null
	Original function gives segmentation fault when
	str is null, so is mine */
void	test_ft_strdup(void)
{
	test_strdup_successfully();
	//str_to_dup_is_null();
}
