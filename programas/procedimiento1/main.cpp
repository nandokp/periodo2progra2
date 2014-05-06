#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/*
ingresar dos numeros usando un procedimiento
luego usando otro procedimiento sumar los numeros
y presentarlos.
*/
using namespace std;

void ingreso(int &num1 , int &num2)
{
    cout << "ingresar numero #1....:";
    cin>>num1;
    cout<<"Ingresar numero #2...:";
    cin>>num2;
}
void sumar(int num1,int num2,int &suma )
{
    suma= num1+num2;
}
int main()
{

    int num1,num2,suma;
    ingreso(num1,num2);
    sumar(num1,num2,suma);
    cout<<"suma es...:"<<suma<<"\n";
}
