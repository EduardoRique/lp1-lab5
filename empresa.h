#ifndef EMPRESA_H
#define EMPRESA_H

#include <ctime>
#include <string>

using std::string;

#include "funcionario.h"

#define Nmax = 5;

class empresa {
	private:
		string nome;
		int CNPJ;
		funcionario listaFuncionarios[Nmax];
	public:
		empresa();
		empresa(string n, float c, funcionario f);

		string	getnome();
		void	setnome(string n);
		float	getcnpj();
		void	setcnpj(float c);
		funcionario* getfuncionario();
		void addfuncionario(funcionario *f, int &N);

};

#endif