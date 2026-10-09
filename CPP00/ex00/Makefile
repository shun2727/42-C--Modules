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

# 1. Create the executable: executable: $(OBJ)
# The executable depends on the object files listed in OBJ.

# 2. Create object files from .cpp files: %.o: %.cpp
# This pattern rule tells Make how to compile a .cpp file into its corresponding .o file.

# 3. Determine which object files are needed: OBJ = $(source:.cpp=.o)
# This converts the .cpp filenames in source into .o filenames.

# 4. Specify the source files: source = bla.cpp
# You list the names of the .cpp files you want to compile.

# 5. Automatically generate the object filenames: OBJ = $(source:.cpp=.o)
# For example, bla.cpp becomes bla.o.
