/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
7.	Faça um programa que solicita ao usuário dois valores inteiros e positivos 
que serão a base e o expoente. O programa deve usar laço de repetição para 
calcular e escrever o resultado da base elevado ao expoente (potência). 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int base, expoente, i; 
    int potencia=1;
    
    cout<<"Informe respectivamente a base e o expoente: ";
    cin>>base>>expoente;
    
    //usando while
    i=0;
    while(i<expoente) {
        potencia = potencia * base;
        i++;
    }
    cout<<"base ^ expoente = "<<potencia;
    
    /*
    //usando for
    for(i=0; i<expoente; i++) {
        potencia = potencia * base;
    }
    cout<<"base ^ expoente = "<<potencia;
    */
    return 0;
}