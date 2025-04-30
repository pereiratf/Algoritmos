/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
11.	Faça um algoritmo que solicite um valor inteiro e informe, ao final, o fatorial deste valor. 
Obs.: por exemplo, o fatorial de 5 é 120, pois 5 x 4 x 3 x 2 x 1 = 120. 
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int valor, fat;
    fat=1;
    do {
        cout<<"\nInforme um valor para o cálculo do fatorial: ";
        cin>>valor;
        if(valor<0) {
            cout<<"Não existe fatorial negativo. Tente novamente!";
        }
    } while(valor<0);
    
    //usando while
    int i=1;
    while (i<=valor) {
        fat = fat * i;
        i++;
    }
    /*
    //usando for
    for (int i=1; i<=fat; i++) {
        fat = fat * i;
    }
    */
    cout<<"O fatorial de "<<valor<<" é "<<fat;
    
    
    
    return 0;
}