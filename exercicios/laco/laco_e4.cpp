/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
4.	Elabore um algoritmo que leia um conjunto indeterminado de valores 
e informe, ao final, o maior e o menor valor lidos. O algoritmo deverá 
ser encerrado se o usuário digitar um valor negativo ou o valor 0. 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int valor; //poderia ser de qualquer tipo, pois o exercício não diz.
    int maior=0,menor=0;
    
    
    
    /*
    //usando while
    valor=1; //garantimos que ele vai entrar no laço a primeira vez
    while (valor>0) {
        cout<<"Informe um valor positivo: ";
        cin>>valor;
        if(valor>maior) {
            maior=valor;
        }
        //valor 0 e negativo são para sair, não para armazenar em menor.
        if(valor<menor && valor>0) {
            menor=valor;
        }
    }
    cout<<"O maior e menor valor são respectivamente "<<maior<<" e "<<menor;
    */
    //usando do-while, pois o while gera um problema.
    //E se não for maior digitado nunca for 1?
    do {
        cout<<"Informe um valor positivo: ";
        cin>>valor;
        if(valor>maior) {
            maior=valor;
        }
        //valor 0 e negativo são para sair, não para armazenar em menor.
        if(valor<menor && valor>0) {
            menor=valor;
        }
    } while (valor>0);
    cout<<"O maior e menor valor são respectivamente "<<maior<<" e "<<menor;
    return 0;
}