CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++ 

NAME = Zombie
source = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
includes = Zombie.hpp

OBJ = $(source:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ): $(includes)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all

.PHONY : clean fclean re all