
objects = test.o print_time.o

helloworld: $(objects)
	gcc $(objects) -o helloworld

test.o: test.c
	gcc -c test.c -o test.o

print_time.o: print_time.c
	gcc -c print_time.c -o print_time.o
