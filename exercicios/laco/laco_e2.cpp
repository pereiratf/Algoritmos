/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
2.	Faça um algoritmo que leia 10 valores inteiros e mostre a sua soma.  
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int valor, soma=0;
    //usando while
    int i=0;
    while (i<10) {
        cout<<" Informe o valor "<<i+1<<": ";
        cin>>valor;
        soma=soma+valor; //também poderia escrever soma+=valor;
        i++;
    }
    cout<<soma;
    /*
    //usando for
    for(int i=0; i<10; i++) {
        cout<<" Informe o valor "<<i+1<<": ";
        cin>>valor;
        soma=soma+valor; //também poderia escrever soma+=valor;
    }
    cout<<soma;
    */
    
    return 0;
}