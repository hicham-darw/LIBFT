SRC_DIR = src
OBJ_DIR = obj
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c 
LIB = libft.a
SRCS= $(wildcard $(SRC_DIR)/*.c)
OBJS= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))


$(LIB): $(OBJS) 
	ar rcs $(LIB) $(OBJ_DIR)/*.o
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $< -o $@ -I includes/
