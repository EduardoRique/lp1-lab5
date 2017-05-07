/**
* @file 	funcoes.cpp
* @brief	Arquivo de corpo com a definição das funções do programa
* @author   Dionísio Carvalho (dionisio@naracosta.com.br)
* @since    29/04/2017
* @date     07/05/2017
*/

#include "funcoes.h"

/**
* @brief    Função que realiza o cadastro uma empresa
* @param    t auxilia na quantidade que a empresa suporta
* @return   Retorna a empresa
*/
empresa AddEmpresa(int t){
    string n, c;
    empresa emp(t);
    
    cout << "Digite o CNPJ da empresa: ";
    cin >> c;
    emp.setcnpj(c);
    
    cout << "Digite o nome da empresa: ";
    cin >> n;
    emp.setnome(n);
    
return emp;
}

/**
* @brief    Função que realiza o cadastro um funcionario
* @return   Retorna o funcionario
*/
funcionario AddFuncionario(){
    string n, d;
    float s;

    cout << "Digite o nome do funcionario: ";
    cin >> n;

    cout << "Digite o salario do funcionario: ";
    cin >> s;

    cout << "Digite a data de admissão do funcionario no formato dd/mm/aaaa: ";
    cin >> d;
    funcionario f(n, s, d);
    
    return f;

}

/**
* @brief    Função que lista os funcionarios em experiencia de uma empresa
* @param    f lista de funcionarios
* @param    t quantidade de funcionarios na empresa
*/
void ListarFuncionariosExp(funcionario* f, int t){

    cout << "Digite o dia de hoje no formato dd/mm/aaaa: "
    string hoje;
    cin > hoje;
    string aux;
    int dia;
    int mes;
    int ano;

    for(int ii=0; ii<3; ii++){    
        getline(f.getdata(), aux, '/');
        int dia = stoi(aux);
        cout << dia << endl;
    }

}

/**
* @brief    Função que da um aumento aos funcionarios da empresa
* @return   empresa
*/
empresa DarAumento(empresa e, float a){

    e.aumento(a);

    return e;    
}