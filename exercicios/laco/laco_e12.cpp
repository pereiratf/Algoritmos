/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira

12.	Faça um algoritmo que faça a geração da série de fibonacci, até o termo n 
informado pelo usuário. Por exemplo, se o usuário informar o valor 6 
deverá ser exibido 8 na tela. 
Obs.: Série de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, ... 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int fib, a, aa; //Fibonacci e os dois anteriores necessários para o cálculo.
    int p; //posição que será calculada
    
    cout<<"Informe até que posição deseja calcular Fibonacci: ";
    cin>>p;
    
    fib = 1; //inicia Fibonacci em 1, pois calcula a partir da posição 2
    a = aa = 1; //inicia os dois primeiros com 1
    for (int i=2; i<p; i++) {
        fib = a + aa; //calcula Fibonacci
        
        //atualiza os anteriores para o próximo cálculo
        aa = a;
        a = fib;
        
        //cout<<fib<<" ";
    }
    
    cout<<"O Fibonacci da posição "<<p<<" é "<<fib;

    return 0;
}