/**
*@file	funcionario.cpp
*@brief	Implementacao da classe funcionario
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@since 03/05/2017
*@date  07/05/2017
*/

#include "funcionario.h"

/**
* @details Os valores de nome, salario e data de admissao sao inicializados com vazio
*/
funcionario::funcionario(){
	nome = "Sem_Nome";
	salario = 0;
	data = "Sem_Data";
}

funcionario::funcionario(string n, float s, string d){
	nome = n;
	salario = s;
	data = d;

}

/**
* @return Nome do funcionário
*/
string funcionario::getnome(){
	return nome;
}

/**
* @details O método modifica o nome do funcionário
* @param   n Nome
*/
void funcionario::setnome(string n){
	nome = n;
}

/**
* @return salario do funcionário
*/
float funcionario::getsalario(){
	return salario;
}

/**
* @details O método modifica o salario do funcionário
* @param   s salario
*/
void funcionario::setsalario(float s){
	salario = s;
}

/**
* @return Data de admissao do funcionário
*/
string funcionario::getdata(){
	return data;
}

/**
* @details O método modifica a data de admissao do funcionário
* @param   d data
*/
void funcionario::setdata(string d){
	data = d;
}

/** 
* @details O operador é sobrecarregado para representar funcionários
* @param	os Referência para stream de saída
* @param	f Referência para o objeto funcionario a ser impresso
* @return	Referência para stream de saída
*/
ostream& operator<<(ostream& os, funcionario f) {
	os <<  f.nome << " " << f.salario << " " << f.data;
    return os;
}

/** 
* @param	is Referência para stream de entrada
* @param	f Referência para o objeto funcionário a ser criado com base nos 
*			valores fornecidos
* @return	Referência para stream de entrada
*/
istream& operator>>(istream& is, funcionario &f) {
    is >> f.nome >> f.salario >> f.data;
    return is;
}