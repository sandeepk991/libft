# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skaur <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 10:01:21 by skaur             #+#    #+#              #
#    Updated: 2022/10/31 14:41:07 by skaur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc -c

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm

RMFLAGS = -f

HEAD = libft.h

MAIN_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_toupper.c ft_tolower.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c

FILES = $(MAIN_FILES) $(BONUS_FILES)

OBJ_FILES = $(FILES:.c=.o)

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(FILES)
	@$(CC) $(CFLAGS) $(FILES)
	@$(AR) $(OBJ_FILES)

clean : 
	@$(RM) $(RMFLAGS) $(OBJ_FILES)
	@echo 'object files are removed.'

fclean : clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo 'library is removed.'

re : fclean all
