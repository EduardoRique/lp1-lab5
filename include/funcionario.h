/**
*@file	funcionario.cpp
*@brief	Cabecalho da classe funcionario
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@since 03/05/2017
*@date  07/05/2017
*/

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;

/**
    * @class   funcionario funcionario.h
    * @brief   Classe que representa um funcionario
    * @details Os atributos de um funcionário são: nome, salarioe e data de admissao
	*/  
class funcionario {
    private:
        string nome; /**< Nome */
        float salario; /**< Salario */
        string data; /**< Data de admissao */
    public:
        funcionario(); /**< Construtor padrao */
        funcionario(string n, float s, string d);
        
        string getnome(); /**< retorna nome */
        void setnome(string n); /**< modifica nome */
        float getsalario(); /**< retorna salario */
        void setsalario(float s); /**< modifica salario */
        string getdata(); /**< retorna data */
        void setdata(string d); /**< modifica a data de admissao */
        friend ostream& operator<<(ostream& os, funcionario f);
        friend istream& operator>>(istream& is, funcionario &f);
    };

#endif