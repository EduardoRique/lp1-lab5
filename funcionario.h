#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;
    
class funcionario {
    private:
        string nome;
        float salario;
        string data;
    public:
        funcionario();
        funcionario(string n, float s, string d);
        
        string getnome();
        void setnome(string n);
        float getsalario();
        void setsalario(float s);
        string getdata();
        void setdata(string d);
    };

#endif