NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address,undefined

all: $(NAME)

$(NAME): $(NAME).cpp
	@$(CC) $(CFLAGS) $(NAME).cpp -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all
