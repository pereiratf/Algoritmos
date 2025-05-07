/******************************************************************************
Algoritmos, UNIVALI
Programador: Thiago Felski Pereira

16.	Faça um programa que solicita ao usuário o número de alunos de uma turma e o
número de provas realizadas. A seguir o programa deve para cada aluno:  
a)	Solicitar o nome do aluno  
b)	Para cada prova realizada solicita a nota deste aluno 
c)	Exibir o nome e a média aritmética das notas deste aluno 
Após o término da digitação o programa deverá exibir o nome do aluno com maior 
média. 
Saídas: 
•	Pedido para a quantidade de alunos = 
    “Digite a quantidade de alunos na sala:”; 
•	Pedido para a quantidade de provas realizadas = 
    “Digite a quantidade de provas aplicadas:” 
•	Para cada aluno = “Digite o nome do aluno:”; 
•	Para cada prova do aluno = “Digite a nota da prova:”; 
•	Após cada pedido de nome e nota será exibido o nome do aluno e média 
    aritmética; 
•	Ao fim será exibido = “Aluno com melhor média: ”, 
    seguido do nome do aluno com melhor média. 

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
    string aluno, melhorAluno;
    float prova, somaProvas, media, melhorMedia=0;
    int qAlunos, qProvas;
    
    cout<<"Digite a quantidade de alunos na sala: ";
    cin>>qAlunos;
    cout<<"Digite a quantidade de provas aplicadas: ";
    cin>>qProvas;
    
    for (int i=0; i<qAlunos; i++) {
        cout<<"Digite o nome do aluno: ";
        cin>>aluno;
        somaProvas = 0;
        for(int j=0; j<qProvas; j++) {
            cout<<"Digite a nota da prova"<<j+1<<" do "<<aluno<<": ";
            cin>>prova;
            somaProvas = somaProvas + prova;
        }
        media = somaProvas / qProvas;
        cout<<"\nAluno: "<<aluno<<"\tmédia: "<<media<<"\n";
        if(media > melhorMedia) {
            melhorMedia = media;
            melhorAluno = aluno;
        }
    }
    
    cout<<"\nA melhor média foi "<<melhorMedia;
    cout<<" e pertence ao aluno "<<melhorAluno;
    

    return 0;
}