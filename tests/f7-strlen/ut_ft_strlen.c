/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:28:11 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:54:43 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_std_count_str(void)
{
	char	s[] = "Testing this really long string";

	printf("Length std_ (ft/std): %ld | %ld\n",
		ft_strlen(s), strlen(s));
	assert(ft_strlen(s) == strlen(s));
	printf("\e[46m\e[1;37m ft_strlen \033[0m ");
	printf("\e[42m\e[1;37m test_std_count_str: OK! \033[0m\n\n");
}

static void	test_empty_count_str(void)
{
	char	s[] = " ";

	printf("Length result (ft/std): %ld | %ld\n",
		ft_strlen(s), strlen(s));
	assert(ft_strlen(s) == strlen(s));
	printf("\e[46m\e[1;37m ft_strlen \033[0m ");
	printf("\e[42m\e[1;37m test_empty_count_str: OK! \033[0m\n\n");
}

static void	test_nonprint_count_str(void)
{
	char	s[] = "\t\r\n\v\f";

	printf("Length result (ft/std): %ld | %ld\n",
		ft_strlen(s), strlen(s));
	assert(ft_strlen(s) == strlen(s));
	printf("\e[46m\e[1;37m ft_strlen \033[0m ");
	printf("\e[42m\e[1;37m test_nonprint_count_str: OK! \033[0m\n\n");
}

static void	test_nullterm_count_str(void)
{
	char	s[] = {'\0'};

	printf("Length result (ft/std): %ld | %ld\n",
		ft_strlen(s), strlen(s));
	assert(ft_strlen(s) == strlen(s));
	printf("\e[46m\e[1;37m ft_strlen \033[0m ");
	printf("\e[42m\e[1;37m test_nullterm_count_str: OK! \033[0m\n\n");
}

/* static void	test_null_count_str(void)
{
	char	*s = NULL;

	printf("Length result (ft/std): %ld | %ld\n",
		ft_strlen(s), strlen(s));
	assert(ft_strlen(s) == strlen(s));
	printf("\n\e[46m\e[1;37m ft_strlen \033[0m ");
	printf("\e[42m\e[1;37m test_null_count_str: OK! \033[0m\n\n");
} */

/* 	test_null_count_str
	Original function gives segmentation fault when
	str is null, so is mine */
void	test_ft_strlen(void)
{
	test_std_count_str();
	test_empty_count_str();
	test_nonprint_count_str();
	test_nullterm_count_str();
	//test_null_count_str();	
}