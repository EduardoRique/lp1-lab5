#include "funcionario.h"

funcionario::funcionario(){
	nome = "Sem_Nome";
	salario = 0;
	data = "Sem_Data";
}

funcionario::funcionario(string n, float s, string d){
	nome = n;
	salario = s;
	data = d;

}
string funcionario::getnome(){
	return nome;
}
void funcionario::setnome(string n){
	nome = n;
}
float funcionario::getsalario(){
	return salario;
}
void funcionario::setsalario(float s){
	salario = s;
}
string funcionario::getdata(){
	return data;
}
void funcionario::setdata(string d){
	data = d;
}
ostream& operator<<(ostream& os, funcionario f) {
	os <<  f.nome << " " << f.salario << " " << f.data;
    return os;
}
istream& operator>>(istream& is, funcionario &f) {
    is >> f.nome >> f.salario >> f.data;
    return is;
}