CC = g++

CFLAGS = -Wall -g

SRCS = main.cpp

OBJS = $(SRCS:.cpp = .o)

TARGET = main

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean