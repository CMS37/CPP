# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 04:12:47 by min-cho           #+#    #+#              #
#    Updated: 2023/02/19 19:49:57 by min-cho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

CXX			= 	c++
CXXFLAGS	= 	-Wall -Werror -Wextra -std=c++98

OBJS_DIR	= ./objs

SRCS =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

OBJS := ${SRCS:%.cpp=${OBJS_DIR}/%.o}

all: ${NAME}

${OBJS_DIR}:
	@mkdir ${OBJS_DIR}

${NAME}: ${OBJS}
	@${CXX} -o ${NAME} ${OBJS}

${OBJS_DIR}/%.o: %.cpp | ${OBJS_DIR}
	@${CXX} ${CXXFLAGS} -g -c $< -o $@

clean:
	@rm -rf ${OBJS_DIR}

fclean:
	@rm -rf ${OBJS_DIR}
	@rm -f ${NAME}

re:
	@make fclean
	@make all


.PHONY: all clean fclean re bonus