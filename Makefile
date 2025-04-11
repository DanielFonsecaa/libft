NAME = libft.a

SRC_PATH = .
INC_PATH = .
BUILD_PATH = .

FILES = ft_isalpha.c
FILES += ft_isprint.c
FILES += ft_isdigit.c
FILES += ft_isalnum.c
FILES += ft_isascii.c
FILES += ft_strlen.c
FILES += ft_memset.c
FILES += ft_bzero.c
FILES += ft_memcpy.c
FILES += ft_memmove.c
FILES += ft_toupper.c
FILES += ft_tolower.c
FILES += ft_atoi.c
FILES += ft_strdup.c
FILES += ft_strlcpy.c
FILES += ft_strlcat.c
FILES += ft_strchr.c
FILES += ft_strrchr.c
FILES += ft_strncmp.c
FILES += ft_memchr.c
FILES += ft_memcmp.c
FILES += ft_strnstr.c
FILES += ft_calloc.c
FILES += ft_substr.c
FILES += ft_strjoin.c
FILES += ft_strtrim.c
FILES += ft_split.c
FILES += ft_itoa.c
FILES += ft_strmapi.c
FILES += ft_striteri.c
FILES += ft_putchar_fd.c
FILES += ft_putstr_fd.c
FILES += ft_putendl_fd.c
FILES += ft_putnbr_fd.c

B_FILES = ft_lstnew_bonus.c
B_FILES += ft_lstadd_front_bonus.c
B_FILES += ft_lstsize_bonus.c
B_FILES += ft_lstlast_bonus.c
B_FILES += ft_lstadd_back_bonus.c
B_FILES += ft_lstdelone_bonus.c
B_FILES += ft_lstclear_bonus.c
B_FILES += ft_lstiter_bonus.c
B_FILES += ft_lstmap_bonus.c

SRC = $(addprefix $(SRC_PATH)/, $(FILES))
B_SRC = $(addprefix $(SRC_PATH)/, $(B_FILES))
OBJS = $(SRC:.c=.o)
B_OBJS = $(B_SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra
CFLAGS += -g
INC += -I $(INC_PATH)

RM = rm -rf
AR = ar rcs
MKDIR = mkdir -p


all: $(BUILD_PATH) $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(BUILD_PATH):
	@echo "Creating $(BUILD_PATH)"
	$(MKDIR) $(BUILD_PATH)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) $(INC)

$(B_OBJS): $(B_SRC)
	$(CC) $(CFLAGS) -c $(B_SRC) $(INC)

bonus: $(OBJS) $(B_OBJS)
	make all
	$(AR) $(NAME) $(OBJS) $(B_OBJS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
