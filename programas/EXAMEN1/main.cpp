#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int turno()
{
    int resp;
    do
    {
        cout<<"ingresar la turno 1,2,3,..:";
        cin>>resp;
    }while (!((resp>=1) and (resp<=3)));
    return resp;
}

int pagohora(int resp)
{
    int pxh;
    if (resp==1)
        pxh=200;
   else if (resp==2)
        pxh=150;
   else
        pxh=180;
    return pxh;

}

void ingresar(char nombre[],int &horas,int &resp)
{
    cout<<"ingresar el nombre...:";
     _flushall();
    cin.getline(nombre,30);
    cout<<"ingresar las horas...:";
    cin>>horas;
}

void calcular(char nombre[],int resp,int horas, double &ihss,double &pb,
              double &pxh,double &tp)
{
  pxh= pagohora(resp);
  pb=pxh * horas;
  if (pb>7000)
        ihss=245;
    else
        ihss=0.035*pb;
  tp= pb-ihss;
}
void presentar( double &pxh,double &pb,double &ihss, double &tp)
{
    cout<<"el pago por hora es..:"<< pxh<<"\n";
    cout<<"el pago bruto es...:"<< pb<<"\n";
    cout<<"el seguro social es...:"<<ihss<<"\n";
    cout<<"el total a pagar es...:"<<tp <<"\n";
}
int validar()
{
    char respuesta;
    do
    {
        cout<<"desea continuar S/N...:";
        cin.get(respuesta);
    }while (!((respuesta=='S') or (respuesta=='N')));
    return respuesta;
}
int main()
{
   double pxh,pb,ihss,tp;
   int horas;
   int resp;
   char verificar;
   char nombre[30];
   do
   {
   turno();
   ingresar(nombre,horas,resp);
   calcular(nombre,resp,horas,ihss,pb,pxh,tp);
   presentar(pxh,pb,ihss,tp);
   verificar=validar();
   }while (verificar!='N');
}
