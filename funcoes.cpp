#include "funcoes.h"

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

funcionario AddFuncionario(){
    string n, d;
    float s;

    cout << "Digite o nome do funcionario: ";
    cin >> n;

    cout << "Digite o salario do funcionario: ";
    cin >> s;

    cout << "Digite a data de admissão do funcionario: ";
    cin >> d;
    funcionario f(n, s, d);
    
    return f;

}
/**
ListarFuncionarios(){

}

ListarFuncionariosExp(){

}*/

empresa DarAumento(empresa e, float a){

    e.aumento(a);

    return e;    
}