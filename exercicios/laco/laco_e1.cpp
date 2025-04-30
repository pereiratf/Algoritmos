/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
1.	Faça um programa que exiba 30 vezes na tela a mensagem “Olá, tudo bem?”. 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    //usando while
    int i=0;
    while (i<30) {
        cout<<i+1<<" Olá, tudo bem?\n";
        i++;
    }

    /*
    //usando for
    for(int i=0; i<30; i++) {
        cout<<i+1<<" Olá, tudo bem?\n";
    }
    */
    return 0;
}