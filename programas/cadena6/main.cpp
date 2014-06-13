#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>


using namespace std;
const int n=4;
string nombre[n];
string cadenabuscar;


void ingreso(string nombre[n])

{
   int i;
   for(i=0;i<n;i++)
   {
       cout<<"Ingresar la cadena ["<<i<<"]....";
       getline(cin,nombre[i],'\n');

   }
}
void buscar(string &cadenabuscar)
{
    cout<<"cadena a buscar...:";
    getline(cin,cadenabuscar);
}
void  presentaBuscar(string nombre[4],string cadenabuscar)
{
    int largo;
    int largo2;
    int c=0;
    int bandera=0;
    string com1;
    for (int i=0;i<n;i++)
    {
        largo=nombre[i].size();
        largo2=cadenabuscar.size();
        c=0;bandera=0;
        while(c<largo)
        {
            com1=nombre[i].substr(c,largo2);
            if (com1==cadenabuscar)
            {
                bandera=1;
            }
            c++;
        }
        if (bandera==1)
        {
            cout<<"cadena encontrada en "<<nombre[i]<<"\n";
        }

        }

    }


void presentar(string nombre [n])
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nombre "<<nombre[i]<<"\n";

    }
}



int main()
{
    ingreso(nombre);
    presentar(nombre);
    buscar(cadenabuscar);
    presentaBuscar(nombre,cadenabuscar);
}
