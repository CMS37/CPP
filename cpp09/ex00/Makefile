# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 20:27:53 by min-cho           #+#    #+#              #
#    Updated: 2023/04/19 18:03:50 by min-cho          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		=	btc

CXX			= 	c++
CXXFLAGS	= 	-Wall -Werror -Wextra -std=c++98

OBJS_DIR	= ./objs

SRCS =	main.cpp \
		BitcoinExchange.cpp

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