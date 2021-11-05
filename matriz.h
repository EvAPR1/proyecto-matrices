#include<iostream>
using std::endl;
using std::cout;
using std::cin;

#include<cstring>
using std::strlen;
using std::strcpy;

class Matriz{
	
	public:
		Matriz(string, unsigned int);
		void Rellenar();
		
	private:
		string fila,columna;
		unsigned int m[][];
		
};
