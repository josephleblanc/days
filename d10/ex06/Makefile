NAME = do_op

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

_OBJ = main.o ft_atoi.o operations.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

DEPS = do_op.h

all : $(NAME)

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)	

$(NAME) : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean : rm -f $(ODIR)/*.o
