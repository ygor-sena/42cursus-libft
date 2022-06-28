/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_ft_strnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 03:28:55 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 15:57:40 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "../../libft/libft.h"
#include <assert.h>

static void	test_len_is_null(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "s";
	size_t		len;

	len = 0;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_len_is_null: OK! \033[0m\n\n");
}

static void	test_strs_are_null(void)
{
	const char	big[] = "";
	const char	little[] = "";
	size_t		len;

	len = 8;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_strs_are_null: OK! \033[0m\n\n");
}

static void	test_str_little_is_null(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "";
	size_t		len;

	len = 8;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_str_little_is_null: OK! \033[0m\n\n");
}

static void	test_str_big_is_null(void)
{
	const char	big[] = "";
	const char	little[] = "42";
	size_t		len;

	len = 8;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_str_big_is_null: OK! \033[0m\n\n");
}

static void	test_little_one_char_found(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "i";
	size_t		len;

	len = 10;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_little_one_char_found: OK! \033[0m\n\n");
}

static void	test_little_one_char_not_found(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "423";
	size_t		len;

	len = 10;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_little_one_char_not_found: OK! \033[0m\n\n");
}

static void	test_little_found(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "42";
	size_t		len;

	len = 10;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_little_found: OK! \033[0m\n\n");
}

static void	test_len_is_negative_little_found(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "42";
	size_t		len;

	len = -9;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_len_is_negative_little_found: OK! \033[0m\n\n");
}

static void	test_little_not_found(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "423";
	size_t		len;

	len = 10;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_little_not_found: OK! \033[0m\n\n");
}

static void	test_len_is_negative_little_not_found(void)
{
	const char	big[] = "This is 42 42 42 42 42!";
	const char	little[] = "423";
	size_t		len;

	len = -10;
	printf("Big str: %s\nLil str: %s\nLength: %ld\nResult (fd/std): %s | %s\n",
		big, little, len, ft_strnstr((char *)big, (char *)little, len),
		strnstr((char *)big, (char *)little, len));
	assert(strnstr((char *)big, (char *)little, len)
		== ft_strnstr((char *)big, (char *)little, len));
	printf("\e[46m\e[1;37m ft_strnstr \033[0m ");
	printf("\e[42m\e[1;37m test_len_is_negative_little_not_found: OK! \033[0m\n\n");
}

void	test_ft_strnstr(void)
{
	test_len_is_null();
	test_strs_are_null();
	test_str_little_is_null();
	test_str_big_is_null();
	test_little_one_char_found();
	test_little_one_char_not_found();
	test_little_found();
	test_len_is_negative_little_found();
	test_little_not_found();
	test_len_is_negative_little_not_found();
}
