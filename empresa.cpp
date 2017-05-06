#include "empresa.h"
#include "funcionario.h"

empresa::empresa(int t){
	nome = "Sem_Nome";
	cnpj = "Sem_CNPJ";
	funcionarios = new funcionario[t + 10];
    tamanhoMax = (t + 10);
    tamanho = 0;

}

empresa::empresa(string n, string c, int t){
	nome = n;
	cnpj = c;
	funcionarios = new funcionario[t+10];
    tamanhoMax = (t + 10);
    tamanho = 0;
}


string	empresa::getnome(){
	return nome;
}

void empresa::setnome(string n){
	nome = n;
}

string empresa::getcnpj(){
	return cnpj;
}

void empresa::setcnpj(string c){
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
    for(int i = 0; i < tamanho; i++){
        funcionarios[i].setsalario(funcionarios[i].getsalario() * (1 + (a/100)));
	}
}

ostream& operator<<(ostream& os, empresa e) {
	os <<  e.nome << " " << e.cnpj;
    return os;
}

istream& operator>>(istream& is, empresa &e) {
    is >> e.nome >> e.cnpj;
    return is;
}