SRCS		= 	ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c \
				ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
				ft_strlcat.c ft_strlcpy.c ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS	= 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
				ft_lstiter.c ft_lstmap.c

INCS		= 	libft.h
OBJS		= 	${SRCS:.c=.o}
OBJS_BONUS	= 	${SRCS_BONUS:.c=.o}

CC			= 	gcc
CC_FLAGS	= 	-Wall -Werror -Wextra
RM			= 	rm -f

NAME		= 	libft.a

%.o: %.c
			${CC} ${CC_FLAGS} -c $< -o $@

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS} ${INCS}

all:		${NAME}

bonus:		${OBJS} ${OBJS_BONUS} 
			ar -rcs ${NAME} ${OBJS} ${OBJS_BONUS} ${INCS}

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus