/**
*@file	funcionario.cpp
*@brief	Implementacao da classe empresa
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@since 03/05/2017
*@date  07/05/2017
*/

#include "empresa.h"
#include "funcionario.h"

/**
* @details Os valores de nome e cnpj são inicializados com vazio
*			e a quantidade com zero
*/
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

/**
* @return Nome da empresa
*/
string	empresa::getnome(){
	return nome;
}

/**
* @details O método adiciona o nome da empresa
* @param   n nome
*/
void empresa::setnome(string n){
	nome = n;
}

/**
* @return CNPJ da empresa
*/
string empresa::getcnpj(){
	return cnpj;
}

/**
* @details O método adiciona o cnpj da empresa
* @param   c cnpj
*/
void empresa::setcnpj(string c){
	cnpj = c;
}

/**
* @return Lista de funcionários
*/
funcionario* empresa::getfuncionario(){
	return funcionarios;
}

/**
* @details O método adiciona um funcionario a lista
* @param   f funcionario
*/
void empresa::addfuncionario(funcionario f){
	if(tamanho<tamanhoMax){
    funcionarios[tamanho] = f;
	tamanho++;
	}
}

/**
* @details O método da um aumento aos funcionarios da lista
* @param   a porcentagem do aumento
*/
void empresa::aumento(float a) {
    for(int i = 0; i < tamanho; i++){
        funcionarios[i].setsalario(funcionarios[i].getsalario() * (1 + (a/100)));
	}
}

/** 
* @details O operador é sobrecarregado para representar a empresa
* @param	os Referência para stream de saída
* @param	e Referência para o objeto empresa a ser impresso
* @return	Referência para stream de saída
*/
ostream& operator<<(ostream& os, empresa e) {
	os <<  e.nome << " " << e.cnpj;
    return os;
}

/** 
* @param	is Referência para stream de entrada
* @param	e Referência para o objeto empresa a ser criado com base nos 
*			valores fornecidos
* @return	Referência para stream de entrada
*/
istream& operator>>(istream& is, empresa &e) {
    is >> e.nome >> e.cnpj;
    return is;
}