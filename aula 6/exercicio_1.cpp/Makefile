all: conversor_de_temperaturas

conversor_de_temperaturas: main.o conversao.o
		g++ main.o conversao.o -o conversor_de_temperaturas

main.o: main.cpp conversao.cpp
		g++ -c main.cpp -o main.o

conversao.o: conversao.cpp conversao.h
		g++ -c conversao.cpp -o conversao.o

clean:
		rm -rf *.o conversor_de_temperaturas