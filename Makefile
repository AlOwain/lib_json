all: build build/debug

build:
	mkdir -p build

clean:
	rm -r build

# Debug
build/debug: build/debug.o object
	g++ build/debug.o build/primitive.o build/string.o build/number.o -o build/debug

build/debug.o: src/debug.cpp
	g++ -c src/debug.cpp -o build/debug.o

# Objects
object: build/primitive.o build/string.o build/number.o

build/primitive.o: src/object/primitive.cpp
	g++ -c src/object/primitive.cpp -o build/primitive.o

build/string.o: src/object/string.cpp
	g++ -c src/object/string.cpp -o build/string.o

build/number.o: src/object/number.cpp
	g++ -c src/object/number.cpp -o build/number.o
