CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++ 

NAME = megaphone

source = megaphone.cpp

#this line has to be ontop or else there will be an error 
OBJ = $(source:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

.PHONY: clean fclean all re

