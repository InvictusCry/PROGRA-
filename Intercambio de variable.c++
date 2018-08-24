#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;
void main ()
{
	float A, B,aux;
	cout<<"Ingrese A "<<endl;
	cin>>A;
	cout<<"Ingrese B"<<endl;
    cin>>B;
	aux=A;
	A=B;
	B=aux;
	cout<<"El valor inverso de A es: "<<endl;
	cout<<A<<endl;
	cout<<"El valor inverso de B es: "<<endl;
	cout<<B;
	getch ();


}
