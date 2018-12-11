NAME = test 

FT_PRINTF = ../ft_printf/

SRC =	main.c \
		pf_test.c

CC = gcc

CFLAGS = -I . -I $(FT_PRINTF) -I $(FT_PRINTF)libft/

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@printf "\033[0;32m[Printftest] Compilation [o.]\r"
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\033[0;32m[Printftest] Compilation [.o]\r"

printre:
	@make -C $(FT_PRINTF) re

$(NAME): printre $(OBJ)
	@printf "[Printftest] Compilation [OK]\n"
	@gcc $(CFLAGS) $(OBJ) $(FT_PRINTF)libftprintf.a $(FT_PRINTF)libft/libft.a -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@printf "\033[0;31m[Printftest] Deleted *.o\n"

fclean: clean
	@/bin/rm -f $(NAME)
	@printf "\033[0;31D[Printftest] Deleted ft_printf.a\n"

re: fclean all

.PHONY: all clean fclean re
