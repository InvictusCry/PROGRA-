#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;
void main ()
{
	float x2, x1, y2, y1;
	double d;
	cout<<"Ingrese x1"<<endl;
	cin>>x1;
	cout<<"Ingrese y1"<<endl;
	cin>>y1;
	cout<<"Ingrese x2"<<endl;
	cin>>x2;
	cout<<"Ingrese y2"<<endl;
	cin>>y2;
	
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	cout<<"La distancia entre los dos puntos del plano es :"<<d;
	getch ();

}

