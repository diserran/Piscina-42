#!/bin/sh
echo "Running tests...\n"
gcc -Wall -Wextra -Werror ./test.c ./ex00/ft_strcpy.c ./ex01/ft_strncpy.c ./ex02/ft_str_is_alpha.c ./ex03/ft_str_is_numeric.c ./ex04/ft_str_is_lowercase.c ./ex05/ft_str_is_uppercase.c ./ex06/ft_str_is_printable.c ./ex07/ft_strupcase.c ./ex08/ft_strlowcase.c ./ex09/ft_strcapitalize.c ./ex10/ft_strlcpy.c ./ex11/ft_putstr_non_printable.c && ./a.out 
echo "All tests ran!\n"

