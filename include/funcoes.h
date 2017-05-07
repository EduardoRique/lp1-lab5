#ifndef FUNCOES_H
#define FUNCOES_H

#include <iostream>
#include <string>
#include "funcionario.h"
#include "empresa.h"

using namespace std;

empresa AddEmpresa(int t);

funcionario AddFuncionario();

void ListarFuncionariosExp(funcionario* f, int t);

empresa DarAumento(empresa e, float a);

#endif