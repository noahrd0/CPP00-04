#	Colors
NOC         = \033[0m
GREEN       = \033[1;32m
RED         = \033[1;31m
BLUE        = \033[1;34m

#	Name
NAME=ex00

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCDIR = .
OBJDIR = objs
SRCS = $(wildcard $(SRCDIR)/*.cpp)
HEADER = $(wildcard $(SRCDIR)/*.hpp)
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.cpp=.o)))

.PHONY: all clean fclean re

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(BLUE)[$(NAME)]$(NOC) $@ created."

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)[$(NAME)]$(NOC) $@ created."

clean:
	@if [ -d $(OBJDIR) ]; then \
		rm -rf $(OBJDIR); \
		echo "$(RED)[$(NAME)]$(NOC) .o files deleted."; \
	else \
		echo "$(RED)[$(NAME)]$(NOC) Nothing to clean."; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "$(RED)[$(NAME)]$(NOC) $(NAME) deleted."; \
	else \
		echo "$(RED)[$(NAME)]$(NOC) Nothing to fclean."; \
	fi

re: fclean all
