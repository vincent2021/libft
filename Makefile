# **************************************************************************** #
#                                                                              #
#                                                   _ ____        _ ____       #
#    Makefile                                      /  (___\      /  (___\      #
#                                                  - | __) )_  __- | __) )     #
#    By: vincent <marvin@42.fr>                    | |/ __/| |/ /| |/ __/      #
#                                                  | | |___|   < | | |___      #
#    Created: 2018/04/07 00:11:01 by vincent       |_|_____)_|\_\|_|_____)     #
#    Updated: 2018/04/14 01:20:11 by vimucchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

SRCO = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCS)
	ar rc $(NAME) $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
