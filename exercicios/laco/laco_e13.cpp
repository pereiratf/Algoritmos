/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira

13.	Faça um programa que solicita a idade de 10 pessoas e exiba a quantidade de 
pessoas que possui idade maior ou igual a 18 anos. 
*******************************************************************************/

#include <iostream>
//#include <stdlib.h>

using namespace std;
int main()
{
    int idade, maior=0;
    //laço while
    int i=0;
    while (i<10) {
        cout<<"Informe a idade da "<<i+1<<"ª pessoa: ";
        cin>>idade;
        if(idade >= 18) {
            maior = maior + 1; //ou simplesmente maior++
        }
        i++;
    }
    
    
    //laço for
    /*
    for(int i=0; i<10; i++) {
        cout<<"Informe a idade da "<<i+1<<"ª pessoa: ";
        cin>>idade;
        if(idade >= 18) {
            maior = maior + 1; //ou simplesmente maior++
        }
    }
    */
    
    cout<<"Foram digitadas "<<maior<<" idades de pessoas adultas.\n";

    return 0;
}