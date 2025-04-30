/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
5.	Faça um algoritmo que solicite um valor para o usuário, 
e gere a tabuada deste valor. Por exemplo, se o usuário informar o 
valor 2 deverá ser gerada a tabuada do número 2, variando de 0 a 10.
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int tabuada; 
    int multiplicador;
    
    cout<<"Informe a tabuada que será exibida: ";
    cin>>tabuada;
    
    //usando while
    multiplicador=0;
    while (multiplicador<=10) {
        cout<<tabuada<<" x "<<multiplicador<<" = "<<tabuada*multiplicador<<"\n";
        multiplicador=multiplicador+1;//poderia ser escrito multiplicador++;
    }
    /*
    //usando for
    for(multiplicador=0; multiplicador<=10; multiplicador++) {
        cout<<tabuada<<" x "<<multiplicador<<" = "<<tabuada*multiplicador<<"\n";
    }
    */
    return 0;
}