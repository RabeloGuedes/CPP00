NAME = phonebook
CXX = c++
CURR_DIR = ./
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I $(CURR_DIR) #-fsanitize=address,undefined
SOURCES = Contact.cpp PhoneBook.cpp
OBJS = $(SOURCES:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) main.cpp
	@$(CXX) $(CXXFLAGS) main.cpp $(SOURCES) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(OBJS)

re: clean all
