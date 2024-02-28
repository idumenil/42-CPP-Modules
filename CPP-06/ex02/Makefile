NAME = ex02

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = $(wildcard *.cpp)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFALGS) -o $@ -c $<

clean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re
