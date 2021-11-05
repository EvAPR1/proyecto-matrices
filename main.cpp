#include<iostream>
using std::endl;
using std::cin;
using std::cout;
#include<math.h>
#include<matriz.h>

int main(){
	
	int funcionalidad, operacion;
	cout<<"\t***BIENVENIDO A LA CALCULADORA DE MATRICES***"<<endl;
	cout<<"-Seleccione la funcionalidad que desea-"<<endl;
	cout<<" 1) Operaciones con matrices"<<endl;
	cout<<" 2) Solucion de sistemas"<<endl;
	cin>>funcionalidad;
	cout<<endl;
	
	switch(funcionalidad)
	{
		case 1:
			cout<<"//Operaciones de matrices//"<<endl;
			cout<<"-Seleccione la operacion que desea-"<<endl;
			cout<<" a) Multiplicacion por un Escalar"<<endl;
			cout<<" b) Suma de dos matrices"<<endl;
			cout<<" c) Producto de dos matrices"<<endl;
			cin>>operacion;
			
			switch(operacion)
			{
				case 1:
					cout<<"MULTIPLICACION POR UN ESCALAR"<<endl;
					cout<<"Ingrese el tamanio de su matriz"<<endl;
			}
	}
		

	
	
	
	
	
	
	
	
	
	return 0;
}
