all: build build/debug

build:
	mkdir -p build

clean:
	rm -r build

# Debug
build/debug: build/debug.o object
	g++ build/debug.o build/primitive.o build/string.o build/number.o build/tree.o -o build/debug

build/debug.o: src/debug.cpp
	g++ -c src/debug.cpp -o build/debug.o

# Object
object: build/primitive.o build/string.o build/number.o build/tree.o

build/primitive.o: src/object/primitives/primitive.cpp
	g++ -c src/object/primitives/primitive.cpp -o build/primitive.o

build/string.o: src/object/primitives/string.cpp
	g++ -c src/object/primitives/string.cpp -o build/string.o

build/number.o: src/object/primitives/number.cpp
	g++ -c src/object/primitives/number.cpp -o build/number.o

build/tree.o: src/object/tree/tree.cpp
	g++ -c src/object/tree/tree.cpp -o build/tree.o
