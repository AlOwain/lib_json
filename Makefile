all: build build/debug

build/debug: build/debug.o build/object.o
	g++ build/debug.o build/object.o -o build/debug

build/debug.o: src/debug.cpp
	g++ -c src/debug.cpp -o build/debug.o

build/object.o: src/object.cpp
	g++ -c src/object.cpp -o build/object.o

build:
	mkdir -p build

clean:
	rm -r build
