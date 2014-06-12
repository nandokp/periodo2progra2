#include <iostream>
#include <string.h>
#include <string>

using namespace std;
string cadena;

int main()
{
    cout<<"Ingresar la cadena: ";
    cin>>cadena;
    string subcadena (cadena,2, 2);
    cout<<"Valor de Subcadena "<<subcadena<<"\n";
    string cortar;
    cortar = cadena.substr(0, 5);
    cout<<"Valor de cortar "<<cortar<<"\n";
    cout<<"Tamaño de la cadena "<<cadena.size()<<"\n";

    return 0;
}
