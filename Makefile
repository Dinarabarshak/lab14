all:
	gcc -Wall -std=c11 src/main.c src/lib.c -o dist/main.bin

run:
	./dist/main.bin assets/input.txt dist/output.txt

clean:
	rm -f dist/main.bin dist/output.txt
