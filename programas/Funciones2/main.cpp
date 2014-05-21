#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado las ventas y el turno.
Validar el turno que sea 1,2,3.)5%,7%,6%
Elaborar una funcion para que nos devuelva el % de las ventas
Elaborar procedimiento para calcular el % de comision, la comision,
el ihss y total a pagar.
*/
int pedirturno()
{
    int turno;
do
{
    cout<<"turno 1,2,3...:";
    cin>>turno;
}while ((turno<1)or (turno>3));

}

void ingreso(char nombre[],int &ventas, int &turno)

{_flushall();

    cout<<"Ingresar nombre: ";
    cin.getline(nombre,30);
    cout<<"Ingresar ventas: ";
    cin>>ventas;
     _flushall();
}

double porcomis(int turno)
{
    switch (turno)
    {
    case 1:
        return 0.05;
        break;
    case 2:
        return 0.07;
        break;
    default:
        return 0.06;
        break;
    }
}

void calcular(int turno, int ventas, double &pc, double &comis, double &ihss, double &tp)
{
    pc=porcomis(turno);
    comis=pc*ventas;
    if (comis>7000)
        ihss=245;
    else
        ihss=0.035*comis;
    tp=comis-ihss;
}

void presentar(double pc,double tp, double ihss,double comis)
{

     cout<<"% de comision es...:"<<pc<<"\n";
     cout<<"comision ganada...:"<<comis<<"\n";
     cout<<"Ihss...:"<<ihss<<"\n";
     cout<<"Total a pagar...:"<<tp<<"\n";
}

char pedirrespuesta()
{
    char resp;
     _flushall();
    do {
        cout<<"desea continuar...:";
        cin.get(resp);
     _flushall();
    }while((resp!='N') or (resp!='S'));
    return resp;
     _flushall();

}

int main()
{
    char nombre[30];
    int turno, ventas;
    double pc,comis,ihss,tp;
    char resp;
    do
        {
    ingreso(nombre,ventas,turno);
    calcular(ventas, turno, comis,ihss,tp,pc);
    presentar(pc,tp,ihss,comis);
    resp= pedirrespuesta();
    }while (resp!='N');
}
