SRC_DIR		= 	../libft/
SRC_FILES	= 	ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c \
				ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
				ft_strlcat.c ft_strlcpy.c ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_PATH	= 	$(addprefix ${SRC_DIR}, ${SRC_FILES}) 

UT_FILES	= 	main.c f0-isalpha/ut_ft_isalpha.c f1-isdigit/ut_ft_isdigit.c \
				f2-toupper/ut_ft_toupper.c f3-tolower/ut_ft_tolower.c \
				f4-isalnum/ut_ft_isalnum.c f5-isascii/ut_ft_isascii.c \
				f6-isprint/ut_ft_isprint.c f7-strlen/ut_ft_strlen.c \
				f8-strchr/ut_ft_strchr.c f9-strrchr/ut_ft_strrchr.c \
				f10-strncmp/ut_ft_strncmp.c f11-strnstr/ut_ft_strnstr.c \
				f12-strlcpy/ut_ft_strlcpy.c f13-strlcat/ut_ft_strlcat.c \
				f14-memset/ut_ft_memset.c f15-bzero/ut_ft_bzero.c \
				f16-memcpy/ut_ft_memcpy.c f17-memmove/ut_ft_memmove.c \
				f18-memchr/ut_ft_memchr.c f19-memcmp/ut_ft_memcmp.c \
				f20-atoi/ut_ft_atoi.c f21-calloc/ut_ft_calloc.c \
				f22-strdup/ut_ft_strdup.c f23-ft-substr/ut_ft_substr.c \
				f24-ft-strjoin/ut_ft_strjoin.c f25-ft-strtrim/ut_ft_strtrim.c \
				f26-ft-split/ut_ft_split.c f27-ft-itoa/ut_ft_itoa.c \
				f28-ft-strmapi/ut_ft_strmapi.c f29-ft-striteri/ut_ft_striteri.c

NAME_DIR	= 	objs/
NAME_PATH	= 	$(addprefix ${NAME_DIR}, ${NAME})
NAME		= 	y_libftTester

CC			= 	gcc
CC_FLAGS	= 	-Wall -Werror -Wextra -lbsd
RM			= 	rm -rf
			
${NAME}:	${SRC_PATH} ${UT_FILES}	
			mkdir -p ${NAME_DIR}		
			${CC} ${CC_FLAGS} -o ${NAME_PATH} ${SRC_PATH} ${UT_FILES} -I /ut_functions.h
			./${NAME_PATH}

all:		${NAME}

clean:
			${RM} ${OBJS_FILES}

fclean:		clean
			${RM} ${NAME_DIR}

re:			fclean all

.PHONY:		all clean fclean re y_libftTester