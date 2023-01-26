# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tobiaslst <tobiaslst@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 11:39:30 by tcaborde          #+#    #+#              #
#    Updated: 2023/01/17 16:05:37 by tobiaslst        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

VPATH = ./:\
		srcs/strings:/\
		srcs/memory:/\
		srcs/lists:/\

# Memory
SRCS += ft_bzero.c ft_doublefree.c ft_strdoubledup.c ft_strdoublelen.c ft_calloc.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memcmp.c

# Strings
SRCS +=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strndup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# Lists
SRCS += ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
ERASE =\033[2K\r
END=\033[0m

FLAGS	=	-Wall -Wextra -Werror
CC		=	gcc
RM		= 	rm -rf

OBJ		=	${addprefix .objects/, $(SRCS:.c=.o)}

#COMMANDS
.objects/%.o: %.c $(HEADER) Makefile
					@mkdir -p .objects
					@${CC} $(FLAGS) -c $< -o $@

$(NAME):		$(OBJ)
				@ar rcs $(NAME) $(OBJ)
				@printf "$(ERASE)$(GREEN)[CREATING LIB]$(END)"

all:			$(NAME)

clean:
				@${RM} ${OBJ}
				@echo "$(RED)[.o DELETED]$(END)"

fclean:			clean
				@${RM} ${NAME}
				@${RM} .objects
				@echo "$(RED)[DELETED EVERYTHING]$(END)"

re:				fclean all

.PHONY:			all clean re fclean
