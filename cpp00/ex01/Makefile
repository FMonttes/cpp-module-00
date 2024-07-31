CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = phonebook
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean