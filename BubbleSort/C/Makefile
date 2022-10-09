TARGET := example

ODIR := ./obj

# .c files to compile
_OBJS := main.c bubble_sort.c

OBJS = $(patsubst %.c,$(ODIR)/%.o,$(_OBJS))

all: $(OBJS)
	gcc -Wall -o bin/$(TARGET) $(OBJS)

$(ODIR)/%.o: %.c
	gcc $^ -o $@ -c

clean : 
	rm -f obj/* bin/*