// trabajo base de datos dia 1.cpp : Defines the entry point for the console application.
//ANTONIO ALFARO, LINZ ANTON VACA, CAMILA ARCE, CAROLNA BENITEZ

#include "stdafx.h"
#include "iostream"
#include "conio.h"



using namespace std;
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();


void main()
{
	int opcion=0;
	do{
		menu();
		cin>>opcion;

		switch(opcion) {
		case 1: { 
					sumar();
				}
				break;
		case 2: {
					restar();
				}
				break;
		case 3: {
					multiplicar();
				}
				break;
	    case 4: {
					dividir();
				}
				break;
		
		default: {
					cout<<"GRACIAS POR USAR LA CALCULADORA, TRABAJO HECHO POR : ANTONIO ALFARO, LINZ ANTON, CAROLINA BEENITEZ, CAMILA ARCE \n";
				 }
		}


	}while(opcion != 19);


	getch();
}







void menu(){
	cout<<"\t\t\t\t\t\t\t""MENU""\n";
	cout<<"\t\t\t""[1] ->"" ""SUMA""\n";
	cout<<"\t\t\t""[2] ->"" ""RESTA""\n";
	cout<<"\t\t\t""[3] ->"" ""MULTIPLICACION""\n";
	cout<<"\t\t\t""[4] ->"" ""DIVISION""\n";
	cout<<"\t\t\t""[19]->"" ""SALIR""\n";
	cout<<"\t\t\t"" SELECCIONE UNA OPCION : ";

}
void sumar() {
	int valor;
	int result=0;
	cout<<"\n Ingrese el primer valor : ";
	cin>>valor;
	result = result + valor;
	cout<<"\n Ingrese el segundo valor : ";
	cin>>valor;
	result = result + valor;

	
	cout<<"\n Resultado de la suma : "<<result;
	cout<<"\n Si desea continuar sumando ingrese un nuevo valor, de lo contratio '0'""\n";
	do{
	    cin>>valor;
		result = result + valor;
		cout<<"El nuevo resultado es : "<<result<<"\n";
	}while(valor != 0);
}

void restar()
{
	int valor;
	int result=0;
	cout<<"\n Ingrese el primer valor : ";
	cin>>valor;
	result = valor;
	cout<<"\n Ingrese el segundo valor : ";
	cin>>valor;
	result = result - valor;

	
	cout<<"\n Resultado de la resta : "<<result;
	cout<<"\n Si desea continuar restando ingrese un nuevo valor, de lo contratio '0'""\n";
	do{
	    cin>>valor;
		result = result - valor;
		cout<<"El nuevo resultado es : "<<result<<"\n";
	}while(valor != 0);
}
void multiplicar(){
	int valor;
	int result=0;
	cout<<"\n Ingrese el primer valor : ";
	cin>>valor;
	result = valor;
	cout<<"\n Ingrese el segundo valor : ";
	cin>>valor;
	result = result * valor;

	
	cout<<"\n Resultado de la multiplicacion : "<<result;
	cout<<"\n Si desea continuar multiplicacion ingrese un nuevo valor, de lo contratio '0'""\n";
	do{
	    cin>>valor;
		result = result * valor;
		cout<<"El nuevo resultado es : "<<result<<"\n";
	}while(valor != 0);
}
void dividir()
{
	float valor;
	float result=0;
	cout<<"\n Ingrese el primer valor : ";
	cin>>valor;
	result = valor;
	cout<<"\n Ingrese el segundo valor : ";
	cin>>valor;
	result = result / valor;

	
	cout<<"\n Resultado de la division : "<<result;
	cout<<"\n Si desea continuar dividiendo ingrese un nuevo valor, de lo contratio '0'""\n";
	do{
	    cin>>valor;
		result = result / valor;
		cout<<"El nuevo resultado es : "<<result<<"\n";
	}while(valor != 0);
}

