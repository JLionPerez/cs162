output: driver.o pizza.o restaurant.o menu.o
	g++ driver.o pizza.o restaurant.o menu.o -o output

driver.o: driver.cpp
	g++ -g -c driver.cpp

pizza.o: pizza.cpp pizza.h
	g++ -g -c pizza.cpp

restaurant.o: restaurant.cpp restaurant.h
	g++ -g -c restaurant.cpp

menu.o: menu.cpp menu.h
	g++ -g -c menu.cpp

clean:
	rm *.o output
