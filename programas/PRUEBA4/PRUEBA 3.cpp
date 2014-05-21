#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

char pedirturno()
{
    char turno;
     do
    {
        cout<<"desea continuar A,B,C...:";
        cin>>turno;
    }while(!((turno=='A') or (turno=='B') or  (turno=='C')));
    return turno;
}
void ingresar(char nombre[],int &horas, char turno)
{
    cout<<"ingresar el nombre del empledo...:";
    cin.getline(nombre,30);
    cout<<"ingresar horas...:";
    cin>>horas;
}

int calpago()
{
    char cturno;
cturno=pedirturno();
int pxh;
switch (cturno)
{
   case  'A':
    pxh=140;
    break;

    case 'B':
    pxh=160;
    break;

case 'C':
    pxh=180;
    break;
}
}

void calcular(char turno,int horas, double &pxh, double &pb, double &ihss,double &tp)
{
pxh=calpago();
pb=pxh*horas;
 if (pb>7000)
        ihss=245;
    else
        ihss=0.035*pb;
tp= pb-ihss;
}

void presentar(double &pxh,double &pb,double &ihss, double &tp)
{
cout<<"el pago por hora es...:"<<pxh<<"\n";
cout<<"el pago bruto es...:"<<pb<<"\n";
cout<<"el seguro social....:"<<ihss<<"\n";
cout<<"el total a apagar es...:"<<tp<<"\n";
}



int main()
{
char nombre[30];
int horas;
char turno;
double ihss,pb,tp;
double pxh;

ingresar(nombre,horas,turno);
calcular(turno,horas,ihss,pxh,pb,tp);
presentar(ihss,pxh,pb,tp);
}
