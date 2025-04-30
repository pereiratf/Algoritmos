/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira
6.	Faça um algoritmo que gere, automaticamente, a tabuada dos valores de 1 a 10. 
Por exemplo, 1 x 1 = 1, 1 x 2 = 2, ... 1 x 10 = 10, 2 x 1 = 1, ..., 10 x 10 = 100. 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int tabuada; 
    int multiplicador;
    
    
    
    //usando while
    tabuada=1;
    while(tabuada<=10){
        multiplicador=0;
        while (multiplicador<=10) {
            cout<<tabuada<<" x "<<multiplicador<<" = "<<tabuada*multiplicador<<"\n";
            multiplicador=multiplicador+1;//poderia ser escrito multiplicador++;
        }
        cout<<"\n";
        tabuada=tabuada+1;
    }
    
    /*
    //usando for
    for(tabuada=1; tabuada<=10; tabuada++) {
        for(multiplicador=0; multiplicador<=10; multiplicador++) {
            cout<<tabuada<<" x "<<multiplicador<<" = "<<tabuada*multiplicador<<"\n";
        }
        cout<<"\n";
    }
    */
    return 0;
}