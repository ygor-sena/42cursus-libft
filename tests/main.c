/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:05:25 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 16:38:39 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_functions.h"

int main (void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	return(0);
}
