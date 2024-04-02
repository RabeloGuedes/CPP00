NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address,undefined

all: $(NAME)

$(NAME): $(NAME).cpp
	@$(CXX) $(CXXFLAGS) $(NAME).cpp -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all
