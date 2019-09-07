
output: driver.o student_db.o
	g++ driver.o student_db.o -o output

driver.o: driver.cpp
	g++ -c driver.cpp

student_db.o: student_db.cpp student_db.h
	g++ -c student_db.cpp

clean:
	rm*.o output