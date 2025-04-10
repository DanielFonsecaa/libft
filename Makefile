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


SRC = $(addprefix $(SRC_PATH)/, $(FILES))
OBJS = $(SRC:.c=.o)

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

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
