# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabmart2 <pabmart2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/20 14:34:30 by pabmart2          #+#    #+#              #
#    Updated: 2024/11/21 18:38:05 by pabmart2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB_DIR = ../lib
NAME = libft.a

SRC = \
    ft_atoi.c \
    ft_bzero.c \
    ft_calloc.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_itoa.c \
    ft_lstadd_back.c \
    ft_lstadd_front.c \
    ft_lstclear.c \
    ft_lstdelone.c \
    ft_lstiter.c \
    ft_lstlast.c \
    ft_lstmap.c \
    ft_lstnew.c \
    ft_lstsize.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memset.c \
    ft_putchar_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c \
    ft_putstr_fd.c \
    ft_split.c \
    ft_strchr.c \
    ft_strdup.c \
    ft_striteri.c \
    ft_strjoin.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_strmapi.c \
    ft_strncmp.c \
    ft_strnstr.c \
    ft_strrchr.c \
    ft_strtrim.c \
    ft_substr.c \
    ft_tolower.c \
    ft_toupper.c \
    ft_uintptrtob.c \
    ft_uitoa.c \
    ft_uitob.c \
    ft_printf/check_printer.c \
    ft_printf/ft_printf.c \
    ft_printf/printers/c_printer.c \
    ft_printf/printers/di_printer.c \
    ft_printf/printers/p_printer.c \
    ft_printf/printers/prct_printer.c \
    ft_printf/printers/s_printer.c \
    ft_printf/printers/u_printer.c \
    ft_printf/printers/x_low_printer.c \
    ft_printf/printers/x_up_printer.c \



OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(LIB_DIR)/$(NAME)

re: fclean
	$(MAKE) all

$(NAME) : $(OBJ)
	@mkdir -p $(LIB_DIR)
	@ar rcs $(LIB_DIR)/$(NAME) $(OBJ)
	@echo "\033[32m\n¡$(NAME) compiled! \
	ᕦ(\033[36m⌐■\033[32m_\033[36m■\033[32m)ᕤ\n"

$(OBJ): %.o : %.c
	@echo "\033[34mCompiling $<\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus
