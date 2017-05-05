#include "empresa.h"
#include "funcionario.h"

empresa::empresa(){
	nome = "Sem_Nome";
	cnpj = 0;
	funcionarios = new funcionario[Nmax];
    tamanhoMax = Nmax;
    tamanho = 0;

}
empresa::empresa(string n, int c){
	nome = n;
	cnpj = c;
	funcionarios = new funcionario[Nmax];
    tamanhoMax = Nmax;
    tamanho = 0;
}

string	empresa::getnome(){
	return nome;
}
void empresa::setnome(string n){
	nome = n;
}
int	empresa::getcnpj(){
	return cnpj;
}
void empresa::setcnpj(int c){
	cnpj = c;
}
funcionario* empresa::getfuncionario(){
	return funcionarios;
}
void empresa::addfuncionario(funcionario f){
	if(tamanho<tamanhoMax){
    funcionarios[tamanho] = f;
	tamanho++;
    }
}
void empresa::aumento(float a) {
    for(int i = 0; i < tamanho; i++)
        funcionarios[i].setsalario(funcionarios[i].getsalario() * (1 + (a/100)));
}