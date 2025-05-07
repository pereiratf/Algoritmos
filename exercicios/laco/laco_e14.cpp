/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira

14.	Faça um programa que verifica se um número digitado pelo usuário é um número 
primo, ou seja, um número que só é divisível por 1 e por ele mesmo. Saídas: 
•	Pedido ao usuário = “Digite um número inteiro:” 
•   Caso seja primo = “O número é primo”; 
•	Caso não seja primo = “O número não é primo”. 

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
    int n;
    bool primo;
    cout<<"informe um número: ";
    cin>>n;
    
    if (n<2) {
        cout<<"O número "<<n<<" não é primo.";
    } else {
        primo = true; // vai ser primo, a não ser que ache um divisor
        int i=2;
        while (i<n && primo == true) {
            if(n%i==0) { //se encontrar um divisor entre 2 e n-1 não é primo
                primo=false;
            }
            i++;
        }
        /*
        //laço for
        for (int i=2; i<n && primo == true; i++) {
            if(n%i==0) { //se encontrar um divisor entre 2 e n-1 não é primo
                primo=false;
            }
        } // fim do laço for
        */
        if(primo==true) {
            cout<<"O número "<<n<<" é primo.";
        } else {
            cout<<"O número "<<n<<" não é primo.";
        }
        
    }
    
    

    return 0;
}