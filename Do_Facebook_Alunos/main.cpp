#include <iostream>
using namespace std;

typedef struct
{
    int matricula;
    float notas[3];

} Aluno;
void LeAluno(Aluno &aluno)
{
    cout<<"Informe a matricula do aluno: ";
    cin>>aluno.matricula;
    for (int i = 0; i < 3; ++i)
    {
        cout<<"Informe a no "<<(i+1)<<": ";
        cin>>aluno.notas[i];
    }
}

float CalculaMediaAluno(Aluno aluno)
{
    return (aluno.notas[0] + aluno.notas[1] + aluno.notas[2])/3;
}

void imprimedadosAluno(Aluno aluno, float media)
{
    cout<<"Matricula: "<<aluno.matricula<<endl;
    cout<<"Nota 1"<<aluno.notas[0]<<endl;
    cout<<"Nota 2"<<aluno.notas[1]<<endl;
    cout<<"Nota 3"<<aluno.notas[2]<<endl;
    cout<<"Media: "<<media<<endl;
}

void ImprimeTurma(Aluno alunos[], int n)
{
    float media;
    for (int i = 0; i < n; ++i)
    {
        media = CalculaMediaAluno(alunos[i]);
        imprimedadosAluno(alunos[i], media);
    }
}

int main()
{
    float media;
    Aluno Turma[5];
    for(int i=0; i< 5; i++)
    {
        LeAluno(Turma[i]); // função que lê de teclado
        // os dados do aluno
    }
    //ImprimeTurma(Turma, 5); // Função que imprime os dados de todos os alunos
    for(int i=0; i< 5; i++)
    {
        media = CalculaMediaAluno(Turma[i]);// função que calcula a média das notas de um aluno

        imprimedadosAluno(Turma[i], media); // imprime os dados do aluno
    }

    return 0;
}

