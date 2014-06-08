#include <iostream>

using namespace std;

const int lin=4;
const int col=5;
int num[lin][col];

void ingresar(int num[lin][col])
{
    int linea;
    int columna;
    for (int l=0;l<lin;l++)
    {

        for(int c=0;c<col-1;c++)
        {
        cout<<"ingrese la fila...:";
         cin>>linea;
         cout<<"ingrese la columna...:";
         cin>>columna;
        }
    }
}
void promedio(int num[lin][col],int linea,int columna)
{
    for(int l=0;l<lin;l++)
    {
        int sumz=0;
        for (int c=0;c<col-1;c++)
        {
            if (num[lin][col]>num[l][c])
            {
                sumz=(sumz+num[lin][col]-num[linea][columna])/4;
            }
        }
    }

}

void presentar(int num[lin][col],int columna,int linea)
{
    for (int l=0;l<lin;l++)
    {
        for(int c=0;c<col-1;c++)
        {
          num[lin][col]=num[l][c];
        }
         cout<<num[lin][col];
    }
}

int main()
{
    int linea,columna;
   ingresar(num);
   promedio(num,linea,columna);
   presentar(num,linea,columna);
}
