SRC_DIR		= ../../libft/
SRC_FILES	= ft_isdigit.c
SRC_PATH	= $(addprefix ${SRC_DIR}, ${SRC_FILES}) 

UT_FILES	= main.c ut_ft_isdigit.c

NAME_DIR	= objs/
NAME_PATH	= $(addprefix ${NAME_DIR}, ${NAME})
NAME		= ft_isdigit

CC			= gcc
CC_FLAGS	= -Wall -Werror -Wextra
RM			= rm -rf
			
${NAME}:	${OUT_DIR} ${SRC_PATH} ${UT_FILES}	
			mkdir -p ${NAME_DIR}		
			${CC} ${CC_FLAGS} -o ${NAME_PATH} ${SRC_PATH} ${UT_FILES}
			./${NAME_PATH}

all:		${NAME}

clean:
			${RM} ${OBJS_FILES}

fclean:		clean
			${RM} ${NAME_DIR}

re:			fclean all

.PHONY:		all clean fclean re ft_isdigit