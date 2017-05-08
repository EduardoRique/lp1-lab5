/**
* @file 	funcoes.h
* @brief	Arquivo de cabecalho com a definição das funções do programa
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@since 03/05/2017
*@date  07/05/2017
*/

#ifndef FUNCOES_H
#define FUNCOES_H

#include <iostream>
#include <string>
#include <fstream>
#include "funcionario.h"
#include "empresa.h"

using namespace std;

/**
* @brief    Função que realiza o cadastro uma empresa
* @param    t auxilia na quantidade que a empresa suporta
* @return   Retorna a empresa
*/
empresa AddEmpresa(int t);

/**
* @brief    Função que realiza o cadastro um funcionario
* @return   Retorna o funcionario
*/
funcionario AddFuncionario();

/**
* @brief    Função que lista os funcionarios em experiencia de uma empresa
* @param    f lista de funcionarios
* @param    t quantidade de funcionarios na empresa
*/
//void ListarFuncionariosExp(funcionario* f, int t);

/**
* @brief    Função que da um aumento aos funcionarios da empresa
* @return   empresa
*/
empresa DarAumento(empresa e, float a);

#endif