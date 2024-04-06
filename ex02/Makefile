CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I.

NAME = tests
SRC = Account.cpp
OBJS = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(NAME).cpp
	@$(CXX) $(CXXFLAGS) $(OBJS) $(NAME).cpp -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
