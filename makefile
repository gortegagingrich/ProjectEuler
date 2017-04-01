euler: main.o
	gcc -o euler *.o;

main.o: src/main.c \
			problem1.o problem2.o problem3.o problem4.o\
 			problem5.o problem6.o problem7.o problem8.o\
 			problem9.o problem10.o problem11.o
	gcc -c src/main.c

problem1.o: src/problem1.c
	gcc -c src/problem1.c

problem2.o: src/problem2.c
	gcc -c src/problem2.c

problem3.o: src/problem3.c
	gcc -c src/problem3.c

problem4.o: src/problem4.c
	gcc -c src/problem4.c

problem5.o: src/problem5.c
	gcc -c src/problem5.c

problem6.o: src/problem6.c
	gcc -c src/problem6.c

problem7.o: src/problem7.c
	gcc -c src/problem7.c

problem8.o: src/problem8.c
	gcc -c src/problem8.c

problem9.o: src/problem9.c
	gcc -c src/problem9.c

problem10.o: src/problem10.c
	gcc -c src/problem10.c

problem11.o: src/problem11.c
	gcc -c src/problem11.c

clean:
	rm euler *.o