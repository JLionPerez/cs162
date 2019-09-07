output: main.o menu.o pizza.o restaurant.o
	g++ main.o menu.o pizza.o restaurant.o -o output

main.o: main.cpp structs.h
	g++ -g -c main.cpp

menu.o: menu.cpp menu.h
	g++ -g -c menu.cpp

pizza.o: pizza.cpp pizza.h
	g++ -g -c pizza.cpp

restaurant.o: restaurant.cpp restaurant.h
	g++ -g -c restaurant.cpp
clean:
	rm *.o output