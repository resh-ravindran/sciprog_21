CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

#Comment line

all : mmc

#linking

mmc : mmMain.o mmFun.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o mmc mmMain.o mmFun.o $(LDFLAGS)

#Compiling
mmFun.o : mmFun.c
	$(CC) -c $(CCFLAGS) $< 

mmMain.o : mmMain.c
	$(CC) -c $(CCFLAGS) mmMain.c 

clean :
	rm *.o