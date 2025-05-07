/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira

15.	Faça um programa que exiba na tela os 20 primeiros números primos 
após o 100. 
*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
    int n=100, quantidade;
    bool primo;
    //Roda até achar 10 primos
    quantidade = 0;
    while (quantidade<20) {
        
        //Código que verifica se o número n é primo
        if(n>1) {
            primo = true; // vai ser primo, a não ser que ache um divisor
            int i=2;
            while (i<n && primo == true) {
                if(n%i==0) { //se encontrar um divisor entre 2 e n-1 não é primo
                    primo=false;
                }
                i++;
            }
            if(primo==true) {
                quantidade++;
                cout<<quantidade<<"\t"<<n<<"\n";
            }
            
            n++;
        } //fim verifica primo
        
    }
    

    return 0;
}