#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panijimb <panijimb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 21:18:03 by panijimb          #+#    #+#              #
#    Updated: 2014/11/14 21:19:02 by panijimb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = ft_isascii.c ft_memchr.c ft_memset.c ft_strchr.c	ft_strlen.c\
		ft_strrchr.c ft_atoi.c ft_isdigit.c ft_memcmp.c ft_putchar.c\
		ft_strcmp.c ft_strncat.c ft_strstr.c ft_bzero.c ft_isprint.c\
		ft_memcpy.c ft_putnbr.c	ft_strcpy.c ft_strncmp.c ft_tolower.c\
		ft_isalnum.c ft_memalloc.c ft_putstr.c ft_strdup.c\
		ft_strncpy.c ft_toupper.c ft_isalpha.c ft_memccpy.c ft_memmove.c\
		ft_strcat.c ft_strlcat.c ft_strnstr.c ft_strsub.c ft_strjoin.c

OBJ = $(SRCS:.c=.o)

GCCW = gcc -Wall -Wextra -Werror

all:	$(NAME)

$(NAME) :
		$(GCCW) -c $(SRCS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all
