/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:15:39 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:43:40 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../../libft/libft.h"

static void	test_split_successfully(void)
{
	char	*test = "   This a is a test five    ";
	char	*expected[] = {"This", "a", "is", "a", "test", "five"};
	char	to_split = ' ';
	char	**result;
	size_t	i;

	i = 0;
	result = ft_split(test, to_split);
	while (result[i] != NULL)
	{
		printf("Word is: '%s' | Expected: '%s'\n", result[i], expected[i]);
		assert(strcmp(result[i], expected[i]) == 0);
		i++;
	}
	free(result);
	printf("\e[46m\e[1;37m ft_split \033[0m ");
	printf("\e[42m\e[1;37m test_split_successfully: OK! \033[0m\n\n");
}

void	test_ft_split(void)
{
	test_split_successfully();
}
