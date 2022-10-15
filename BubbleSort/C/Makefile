TARGET := example

CURRENT_DIR := $(notdir $(shell pwd))

ODIR := obj

BDIR := bin

# .c files to compile
_OBJS := main.c bubble_sort.c


OBJS = $(patsubst %.c,$(ODIR)/%.o,$(_OBJS))

all: $(ODIR) $(BDIR) $(OBJS)
	gcc -Wall -o $(BDIR)/$(TARGET) $(OBJS)

$(ODIR):
	mkdir $(ODIR)

$(BDIR):
	mkdir $(BDIR)

$(ODIR)/%.o: %.c
	gcc $^ -o $@ -c

clean : 
	rm -f $(ODIR)/* $(BDIR)/*