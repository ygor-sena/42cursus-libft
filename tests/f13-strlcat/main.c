/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 02:38:03 by yde-goes          #+#    #+#             */
/*   Updated: 2022/06/28 16:33:57 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ut_functions.h"

int	main(void)
{
	test_ft_strlcat();
	return (0);
}

/* #include <stdio.h>
#include <bsd/string.h>
#include "../../includes/libft.h"
#include <assert.h>

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
} */