#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>

#include "funcionario.h"

using namespace std;

#define Nmax 5

class empresa {
	private:
		string nome;
		int cnpj;
		funcionario *funcionarios;
		int tamanhoMax;
		int tamanho;
	public:
		empresa();
		empresa(string n, int c);

		string	getnome();
		void	setnome(string n);
		int	getcnpj();
		void	setcnpj(int c);
		funcionario* getfuncionario();
		void addfuncionario(funcionario f);
		void aumento(float percentual);

};

#endif