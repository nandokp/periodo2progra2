#include <iostream>

using namespace std;

const int lin=3;
const int col=3;
char num[lin][col];

void rellenar()
{
    for (int l=0; l<lin; l++)
    {
        for(int c=0; c<col; c++)
        {
            num[l][c]=' ';

        }
    }
}


void presentar()
{
    for(int l=0; l<lin; l++)
    {
        cout<<"\n";
        for(int c=0; c<col; c++)

        {
            if(c<col-1)
            cout<<num[l][c]<<" | ";
            else
            cout<<num[l][c]<<"  ";

        }
        if(l<=lin-2)
        cout<<"\n---------";
        else
            cout<<"\n\n";
    }

}

void pedir(char num[lin][col],char marca)
{    int linea,columna, correcto=0;
    cout<<"\nTurno: "<<marca<<"\n";
    do{
    do{
    cout<<"Linea deseada ";
    cin>>linea;

    }while (!(linea>=1 and linea<=3));
    linea-=1;
    do
    {
    cout<<"colummna deseada ";
    cin>>columna;
    }while(!(columna>=1 and columna<=3));
    columna-=1;

        if(num[linea][columna]==' '){
            num[linea][columna]=marca;
            correcto=0;
        }else{
            cout<<"\t CASILLA OCUPADA..!\n";
            correcto=1;
        }
    }while(correcto!=0);

}

bool validarDiagonal_X(){

    if(num[0][0]=='X' and num[1][1]=='X' and num[2][2]=='X')
        return true;
    if(num[0][2]=='X' and num[1][1]=='X' and num[2][0]=='X')
        return true;

return false;
}

bool validarDiagonal_0(){

    if(num[0][0]=='0' and num[1][1]=='0' and num[2][2]=='0')
        return true;
    if(num[0][2]=='0' and num[1][1]=='0' and num[2][0]=='0')
        return true;

return false;
}

bool validarRecta_X(){
    if(num[0][0]=='X' and num[0][1]=='X' and num[0][2]=='X')
        return true;
    if(num[1][0]=='X' and num[1][1]=='X' and num[1][2]=='X')
        return true;
    if(num[2][0]=='X' and num[2][1]=='X' and num[2][2]=='X')
        return true;

 return false;
}

bool validarRecta_0(){
    if(num[0][0]=='0' and num[0][1]=='0' and num[0][2]=='0')
        return true;
    if(num[1][0]=='0' and num[1][1]=='0' and num[1][2]=='0')
        return true;
    if(num[2][0]=='0' and num[2][1]=='0' and num[2][2]=='0')
        return true;

 return false;
}

bool validarVertical_X(){
    if(num[0][0]=='X' and num[1][0]=='X' and num[2][0]=='X')
        return true;
    if(num[0][1]=='X' and num[1][1]=='X' and num[2][1]=='X')
        return true;
    if(num[0][2]=='X' and num[1][2]=='X' and num[2][2]=='X')
        return true;

 return false;

}

bool validarVertical_0(){
    if(num[0][0]=='0' and num[1][0]=='0' and num[2][0]=='0')
        return true;
    if(num[0][1]=='0' and num[1][1]=='0' and num[2][1]=='0')
        return true;
    if(num[0][2]=='0' and num[1][2]=='0' and num[2][2]=='0')
        return true;

 return false;

}



int main()
{

    int resp;
    do{
        cout<<"\t      Bienvenido al Juego X-0   \n";
    rellenar();
    presentar();
    for (int i=0; i<9; i++)
    {
        pedir(num,'X');
        presentar();
        if(validarDiagonal_X()==true or validarRecta_X()==true or validarVertical_X()==true){
            cout<<"Felicidades has ganado! 'X' ";
            break;
        }
        pedir(num,'0');
        presentar();
        if(validarDiagonal_0()==true or validarRecta_0()==true or validarVertical_0()==true){
            cout<<"Felicidades has ganado! '0' ";
            break;
        }
    }

    cout<<"\n\nDesea jugar de nuevo..? 1=Si 0=NO...:";
    cin>>resp;
    }while(resp!=0);
}
