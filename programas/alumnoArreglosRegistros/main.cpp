#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

/*
con la estructura
alumno
arreglo parciales(3 parciales)
promedio
obs


Elaborar un arreglo de registros 5 alumnos
elaborar un procedimiento para el ingreso de datos
elaborar una funcion para devolver el promedio ingresado  el arreglo de parciales
elaborar procedimiento para calcular el promedio(se llama la funcion promedio)
y la observacion

elaborar un procedimiento para presentar un registro de alumnos
y otro para presentar todos los registros llamando
el procedimiento de presentar un registro

*/
struct alumno
{
    char nombre[30];
    char obs[15];
    double parcial[2];
    double promedio;
};
const int n=4;
alumno alum[n];

void ingreso(alumno alum[])
{
    for (int i=0;i<=n;i++)
    { _flushall();
       cout<<"Ingresar el nombre del alumno...:";
        cin.getline(alum[i].nombre,30);
        for (int k=0;k<=2;k++)
        {
        cout<<"Ingresar la nota del parcial....;"<<k<<"...:";
        cin>>alum[i].parcial[k];
         }
    }
}

double promediox (double parcial[])
{  double suma=0;
         for (int i=0;i<3;i++)
         {
            suma+=parcial[i];
         }
    return suma/3;
}

void calcular(alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
     alum[i].promedio=promediox(alum[i].parcial);
  if (alum[i].promedio>=60)
  {
    strcpy(alum[i].obs,"Aprobado");
  }
  else
  {
      strcpy(alum[i].obs,"Reprobado");
  }
    }

}

void presentar(alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
        cout<<"el alumno es....:"<<alum[i].nombre<<"\n";
        cout<<"El promedio es...:" <<alum[i].promedio<<"\n";
        cout<<"esta    "<<alum[i].obs<<"\n";
    }

}
int main()
{
ingreso(alum);
  calcular(alum);
  presentar(alum);
}
