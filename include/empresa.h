/**
*@file	funcionario.h
*@brief	Cabecalho da classe empresa
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@since 03/05/2017
*@date  07/05/2017
*/

#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>

#include "funcionario.h"

using namespace std;

/**
    * @class   empresa empresa.h
    * @brief   Classe que representa uma empresa
    * @details Os atributos de um funcionário são: nome, cnpj, funcionarios, 
    * 			quantidade de funcionarios e quantidade maxima
	*/ 
class empresa {
	private:
		string nome;	/**< Nome */
		string cnpj;	/**< CNPJ */
		funcionario *funcionarios;	/**< Lista de funcionarios */
		int tamanhoMax;	/**< quantidade maxima de funcionarios */
		int tamanho;	/**< quantidade de funcionarios */
	public:
		empresa(int t);	/**< Construtor padrao */
		empresa(string n, string c, int t);

		string	getnome();	/**< retorna o nome */
		void	setnome(string n);	/**< modifica o nome */
		string getcnpj();	/**< retorna o cnpj */
		void	setcnpj(string c);	/**< modifica o cnpj */
		funcionario* getfuncionario();	/**< retorna lista de funcionarios */
		void addfuncionario(funcionario f);	/**< adiciona funcionario */
		void aumento(float a);	/**< Da um aumento */
		friend ostream& operator<<(ostream& os, empresa e);
        friend istream& operator>>(istream& is, empresa &e);

};

#endif