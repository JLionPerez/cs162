output: main.o employee.o hours.o menu.o pizza.o restaurant.o
	g++ main.o employee.o hours.o menu.o pizza.o restaurant.o -o output

main.o: main.cpp
	g++ -c main.cpp

employee.o: employee.cpp employee.h
	g++ -c employee.cpp

hours.o: hours.cpp hours.h
	g++ -c hours.cpp

menu.o: menu.cpp menu.h
	g++ -c menu.cpp

pizza.o: pizza.cpp pizza.h
	g++ -c pizza.cpp

restaurant.o: restaurant.cpp restaurant.h
	g++ -c restaurant.cpp
clean:
	rm *.o output