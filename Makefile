FT_PRINTF =	../ft_printf/
INC_FT_PRINTF =	$(FT_PRINTF)

NAME =		test

CC =		gcc

CFLAGS =	-w -I inc/ -I $(INC_FT_PRINTF)

DEBUG =		#-g3 -fsanitize=address

INC_DIR =	inc

INC_FILE =	printftest.h

SRC_DIR =	src

SRC_FILE =	main.c \
			pf_test.c \
			stdout.c \
			tool.c

OBJ_DIR =	.obj
OBJ_FILE =	$(SRC_FILE:.c=.o)

CRT_DIR =	.

SRC = 		$(addprefix $(SRC_DIR)/,$(SRC_FILE))
INC = 		$(addprefix $(INC_DIR)/,$(INC_FILE))
OBJ = 		$(addprefix $(OBJ_DIR)/,$(OBJ_FILE))
CRT = 		$(addprefix $(OBJ_DIR)/,$(CRT_DIR))

all: $(NAME)

printre:
	@make -C $(FT_PRINTF)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC) Makefile
	@printf "\033[0;32m[ft_printftest] Compilation [o.]\033[0;0m\r"
	@mkdir -p $(CRT) 2> /dev/null || true
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\033[0;32m[ft_printftest] Compilation [.o]\033[0;0m\r"

$(NAME): printre $(OBJ)
	@printf "\033[0;32m[ft_printftest] Compilation [OK]\033[0;0m\n"
	@make -C $(FT_PRINTF)
	@gcc $(CFLAGS) $(DEBUG) $(OBJ) $(FT_PRINTF)libftprintf.a -o $(NAME)

malloc: printre $(OBJ)
	@printf "\033[0;32m[ft_printftest] Compilation [OK]\033[0;0m\n"
	@make -C $(FT_PRINTF)
	@$(CC) $(CFLAGS) -c src/malloc.c -o .obj/malloc.o
	@gcc $(CFLAGS) $(DEBUG) $(OBJ) .obj/malloc.o $(FT_PRINTF)libftprintf.a -o $(NAME)


clean:
	@make -C $(FT_PRINTF) clean
	@/bin/rm -f $(OBJ)
	@/bin/rm -rf $(OBJ_DIR)
	@printf "\033[0;31m[ft_printftest] Deleted *.o\033[0;0m\n"

fclean: clean
	@make -C $(FT_PRINTF) fclean 
	@/bin/rm -f $(NAME)
	@printf "\033[0;31D[ft_printftest] Deleted ft_printftest\033[0;0m\n"

re: fclean all

.PHONY: all clean fclean re
