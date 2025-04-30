/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
3.	3.	Chico tem 1,50 metros e cresce 2 centímetros por ano, 
enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
Construa um algoritmo que calcule e imprima quantos anos 
serão necessários para que Zé seja maior que Chico. 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float ze=1.1, chico=1.5,ano=0;
    //usando while
    while (ze<chico) {
        ze=ze+0.03; //pode ser escrito como ze+=0.03
        chico=chico+0.02;
        ano=ano+1;
        //cout<<ze<<" "<<chico<<"\n";
    }
    cout<<"Foram necessários "<<ano<<" anos.";
    cout<<"\nPara que Zé fosse maior que Chico.";
    
    
    return 0;
}