build:
	gcc -Wall -std=c99 ./src/*.c -o 3DRenderer -lSDL2

clean:
	rm 3DRenderer

run:
	./3DRenderer