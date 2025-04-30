/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
9.	Faça um programa que solicita ao usuário um número real positivo. 
Verifique se o número é realmente positivo, e em caso contrário solicite ao 
usuário digitar novamente (este processo pode se repetir inúmeras vezes e é 
chamado de consistência, pois garante que o número será válido após a entrada de 
dados). Saídas: 
•	Pedido ao usuário = “Digite um número real positivo”; 
•	Caso número valido = “O número digitado é valido”; 
•	Caso número invalido = “Número invalido, tente novamente”. 

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float valor;
    
    //usando while
    valor=-1; //para entrar no while
    while(valor<=0) { //zero não é positivo
        cout<<"Digite um número real positivo: ";
        cin>>valor;
        if(valor<=0) {
            cout<<"Número invalido, tente novamente";
        }
    }
    
    /*do {
        cout<<"Digite um número real positivo: ";
        cin>>valor;
        if(valor<=0) {
            cout<<"Número invalido, tente novamente";
        }
    } while(valor<=0); */
    cout<<"O número digitado, "<<valor<<", é valido";
    return 0;
}