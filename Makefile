# **************************************************************************** #
#                                                                              #
#                                                   _ ____        _ ____       #
#    Makefile                                      /  (___\      /  (___\      #
#                                                  - | __) )_  __- | __) )     #
#    By: vincent <marvin@42.fr>                    | |/ __/| |/ /| |/ __/      #
#                                                  | | |___|   < | | |___      #
#    Created: 2018/04/07 00:11:01 by vincent       |_|_____)_|\_\|_|_____)     #
#    Updated: 2018/04/23 00:37:40 by vimucchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) 
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
