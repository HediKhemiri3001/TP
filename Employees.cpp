#include "Employees.h"
#include<iostream>
#include<string>
using namespace std;
float Employees::valDeSalaire = 1000;
int Employees::nbEmp= 0;
Employees::Employees(){
}
Employees::Employees(std::string name, float ids)
{
    this->name = name;
    this->matricule = nbEmp+1;
    this->nbEmp++;
    this->ids = ids;
}
float Employees::calcSalaire(){
    return(this->valDeSalaire*this->ids);
}
void Employees::showEmployee(){
    cout << "Employe : Nom :"<< this->name << endl;
    cout << "          Matricule :"<<this->matricule<<endl;
    cout << "          Indice de salaire :"<<this->ids<<endl;
}
Employees::~Employees()
{
    //dtor
}
