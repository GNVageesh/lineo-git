CC = g++
CFLAGS = -g -Wall

TARGET = lineo
DEST = /usr/bin/

install:
	$(CC) $(CFLAGS) main.cpp -o $(TARGET)
	sudo cp $(TARGET) $(DEST)
	rm lineo

clean:
	sudo rm $(DEST)$(TARGET)