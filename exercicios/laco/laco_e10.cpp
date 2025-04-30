/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
10.	Faça um programa para uma calculadora simples que solicita ao usuário dois operandos como entrada, seleciona uma das opções da lista (1- soma, 2- produto, 3- divisão, 4- potência) e exibe o resultado. O algoritmo deve executar repetidamente até que os dois operandos informados sejam iguais a zero. Utilize uma variável do tipo real para exibir o resultado.
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int op1, op2, operacao;
    int potencia = 1;
    op1=1; //para entrar no while
    while(op1 != 0 || op2 != 0) {
        cout<<"\nInforme, respectivamente os dois operandos da operação: ";
        cin>>op1>>op2;
        
        if(op1 != 0 || op2 != 0) { //evita perguntar a operação, se a intensão é sair.
            cout<<"Informe a operação desejada: ";
            cout<<"\n\t1 - soma\n\t2 - produto\n\t3 - divisão\n\t4 - potencia\nR: ";
            cin>>operacao;
            
            switch(operacao) {
                case 1: cout<<"soma = "<<op1 + op2;
                break;
                case 2: cout<<"produto = "<<op1 * op2;
                break;
                case 3: cout<<"divisao = "<<1.0*op1 / op2;
                break;
                case 4: 
                    for(int i=0; i<op2; i++) {
                        potencia = potencia * op1;
                    }
                    cout<<"potencia = "<<potencia;
                break;
                default:
                    cout<<"Operação inválida!";
            }
        }
    }
    
    
    return 0;
}