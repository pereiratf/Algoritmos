/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
8.	Faça um programa que solicita ao usuário uma quantidade indeterminada de 
números inteiros. O programa deve calcular e escrever a média aritmética apenas 
dos números pares. A entrada de dados deve ser encerrada quando o número 0 (ZERO) 
for digitado. 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int soma=0, quantidade=0, valor; 
    float media;
    
    
    //usando while
    valor=1; //para entrar no while
    while(valor!=0) {
        cout<<"Informe um valor: ";
        cin>>valor;
        if(valor%2 == 0 && valor != 0) {
            soma = soma + valor;
            quantidade = quantidade + 1;
        }
    }
    /*do {
        cout<<"Informe um valor: ";
        cin>>valor;
        if(valor%2 == 0 && valor != 0) {
            soma = soma + valor;
            quantidade = quantidade + 1;
        }
    } while(valor!=0); */
    media = 1.0*soma/quantidade;
    cout<<"Foram informados "<<quantidade<<" valores pares.";
    cout<<"\nA soma de todos os valores pares é "<<soma;
    cout<<"\nA media aritmética desses valores é "<<media;

    return 0;
}