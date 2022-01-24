# Makefile
 
# ****************************************************
CC = g++
CFLAGS = -Wall
# ****************************************************

# The build target
TARGET = program

# ****************************************************
$(TARGET): main.o MyTimer.o
	$(CC) $(CFLAGS) main.o MyTimer.o -o $(TARGET)

main.o: main.cpp
	$(CC) -c main.cpp

MyTimer.o: MyTimer.cpp
	$(CC) -c MyTimer.cpp

clean:
	del *.o *.exe