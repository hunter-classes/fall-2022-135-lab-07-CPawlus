main: main.o
	g++ -o main main.o

main.o: main.cpp 
	g++ -c main.cpp

unindent: unindent.o
	g++ -o unindent unindent.o 

unindent.o: unindent.cpp 
	g++ -c unindent.cpp

indent: indent.o
	g++ -o indent indent.o 

indent.o: indent.cpp 
	g++ -c indent.cpp

clean:
	rm -f main unindent indent main.o unindent.o indent.o

# Decided not to do tests.