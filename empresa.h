#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>

#include "funcionario.h"

using namespace std;

class empresa {
	private:
		string nome;
		string cnpj;
		funcionario *funcionarios;
		int tamanhoMax;
		int tamanho;
	public:
		empresa(int t);
		empresa(string n, string c, int t);

		string	getnome();
		void	setnome(string n);
		string getcnpj();
		void	setcnpj(string c);
		funcionario* getfuncionario();
		void addfuncionario(funcionario f);
		void settamanho(int t);
		void aumento(float a);
		friend ostream& operator<<(ostream& os, empresa e);
        friend istream& operator>>(istream& is, empresa &e);

};

#endif