/**
* @file 	menu.cpp
* @brief	Arquivo de corpo com a definição de funções para o menu
*@author Luís Eduardo Rique (luiseduardorique@gmail.com)
*@since 03/05/2017
*@date  07/05/2017
*/

#include "menu.h"

/**
* @brief    Função que imprime o menu
*/
int menu(){
    
    int opcao; /**< Opcao que sera passada pelo usuario */
    do{ 
        cout << endl;
        cout << "=========================================" << endl;
        cout << "Cadastro de empresas e funcionarios" << endl;
        cout << "=========================================" << endl;
        cout << "(1) Adicionar empresa" << endl;
        cout << "(2) Adicionar novo funcionario" << endl;
        cout << "(3) Listar funcionarios" << endl;
        cout << "(4) Listar funcionarios em experiencia" << endl;
        cout << "(5) Dar um aumento" << endl;
        cout << "(6) Adicionar funcionarios do arquivo" << endl;
        cout << "(0) Sair" << endl;

        cout << endl;
        cout << "Digite a sua opcao: ";
        cin >> opcao;

        cout << endl;
            
        if(opcao<0 || opcao>6) cout << endl << endl << "=======================" << endl << "Digite uma opcao valida" << endl << "=======================" << endl << endl;
    }while(opcao<0 || opcao>6);
    
    return opcao;
}