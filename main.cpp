#include <iostream>
#include <string>

#include "funcionario.h"
#include "empresa.h"

using namespace std;

int main(void) {

    int opcao; /**< Opcao que sera passada pelo usuario */
    
    do{ 
        cout << endl;
        cout << "=========================================" << endl;
        cout << "Cadastro de empresas e funcionarios" << endl;
        cout << "=========================================" << endl;
        cout << "(1) Adicionar empresa" << endl;
        cout << "(2) Adicionar funcionario" << endl;
        cout << "(3) Listar funcionarios" << endl;
        cout << "(4) Listar funcionarios em experiencia" << endl;
        cout << "(5) Dar um aumento" << endl;
        cout << "(0) Sair" << endl;

        cout << endl;
        cout << "Digite a sua opcao: ";
        cin >> opcao;

        cout << endl;
        
        if(opcao<0 || opcao>5) cout << endl << endl << "=======================" << endl << "Digite uma opcao valida" << endl << "=======================" << endl << endl;

    }while(opcao != 0 && (opcao<0 || opcao>5));

    switch(opcao){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        //default:
            //cout << "Programa finalizado" << endl;
    }

    

    empresa emp("Lp1 Corp.", 1234567890);
    funcionario f1("Funcionario1", 1000.43, "04/05/2017");
    funcionario f2("Funcionario2", 2000.43, "05/05/2017");
    emp.addfuncionario(f1);
    emp.addfuncionario(f2);

    emp.aumento(100);

    funcionario *f = emp.getfuncionario();

    for(int ii=0; ii<2; ii++){
       cout << f[ii] << endl; 
    }

    


    return 0;
}