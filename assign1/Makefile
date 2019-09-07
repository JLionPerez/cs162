
output: run_netflix.o netflix.o
	g++ run_netflix.o netflix.o -o output

run_netflix.o: run_netflix.cpp
	g++ -c run_netflix.cpp

netflix.o: netflix.cpp netflix.h
	g++ -c netflix.cpp

clean:
	rm *.o output