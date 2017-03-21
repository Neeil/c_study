IDIR = ../include
CC = gcc
CFLAGS= -I$(IDIR)

ODIR=obj
LDIR=../lib

LIBS=-lm

_DEPS = func.h LinkList.h AdvancedLinkList.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ = main.o func.o LinkList.o AdvancedLinkList.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ))

$(ODIR)/%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main : $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY : clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
