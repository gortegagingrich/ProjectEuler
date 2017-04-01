euler: src/main.o
	gcc -o euler *.o; rm *.o

src/main.o: src/main.c src/problem1.o src/problem2.o src/problem3.o src/problem4.o src/problem5.o src/problem6.o src/problem7.o src/problem8.o src/problem9.o src/problem10.o
	gcc -c src/main.c

src/problem1.o: src/problem1.c
	gcc -c src/problem1.c

src/problem2.o: src/problem2.c
	gcc -c src/problem2.c

src/problem3.o: src/problem3.c
	gcc -c src/problem3.c

src/problem4.o: src/problem4.c
	gcc -c src/problem4.c

src/problem5.o: src/problem5.c
	gcc -c src/problem5.c

src/problem6.o: src/problem6.c
	gcc -c src/problem6.c

src/problem7.o: src/problem7.c
	gcc -c src/problem7.c

src/problem8.o: src/problem8.c
	gcc -c src/problem8.c

src/problem9.o: src/problem9.c
	gcc -c src/problem9.c

src/problem10.o: src/problem10.c
	gcc -c src/problem10.c

clean:
	rm euler 