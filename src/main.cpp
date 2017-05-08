/** 
*@file main.cpp
*@brief Programa que permite criar uma empresa e cadastrar funcionarios
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@since 03/05/2017
*@date  07/05/2017
*/


#include <iostream>
#include <string>
#include <fstream>


#include "funcionario.h"
#include "empresa.h"
#include "menu.h"
#include "funcoes.h"

using namespace std;

/**
* @brief    Função principal
*/
int main(int argc, char* argv[]) {

    ifstream entrada(argv[1]); 
    if(!entrada){
        cout << "O arquivo de entrada nao foi encontrado!" << endl;
        return 0;
}

    string str; /**< String para a leitura do arquivo */
    getline(entrada, str);
    int t = stoi(str); /**< Quantidade de funcionario da empresa */

    empresa emp(t); /**< Empresa */
    funcionario *f = new funcionario[t+10]; /**< ALocando o vetor de funcionarios da empresa */

    int aux; /**< Auxiliar para a leitura do salario */
    float a; /**< porcetagem do aumento */
    int cont=0;
    int ce=0; /**< controle de empresas */
    while(1){
        switch(menu()){
            case 0:
            entrada.close();
            delete[] f;
            return 0;
            
            case 1:
                if(ce > 0){
                    cout << "Empresa já criada" << endl;
                    cout << "Nome e CNPJ da empresa: " << emp << endl;
                    break;
                }
                emp = AddEmpresa(t);
                ce++;
                break;
            
            case 2:
                if(cont < 1){
                    cout << "Adicione primeiro os funcionarios do arquivo" << endl;
                    break;
                }
                f[cont] = AddFuncionario();
                emp.addfuncionario(f[cont]);
                cont++;
                t++;
                break;
            case 3:

                f = emp.getfuncionario();

                for(int ii=0; ii<t; ii++){
                    cout << f[ii] << endl;
                }
                
                break;
            case 4:
                
                //f = emp.getfuncionario();

                //ListarFuncionariosExp(f, t);

                break;
            case 5:
                cout << "Digite o valor do aumento desejado em porcentagem: ";
                cin >> a;
                emp = DarAumento(emp, a);
                break;
            case 6:
                if(ce == 0){
                    cout << "Primerio crie uma empresa" << endl;
                    break;
                }
                
                while(cont < t){
                    

                    getline(entrada, str, ' ');
                    f[cont].setnome(str);
                    
                    getline(entrada, str, ' ');
                    aux = stoi(str);
                    f[cont].setsalario(aux);
                    
                    getline(entrada, str);
                    f[cont].setdata(str);

                    emp.addfuncionario(f[cont]);

                    cont++;
                }
            break;
        }

    }
    entrada.close();

    delete[] f;

    return 0;
}