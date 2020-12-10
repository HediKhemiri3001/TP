#include "Responsables.h"
#include<string>
#include<iostream>
using namespace std;
Responsables::Responsables(std::string Rname, float Rids,int n):Employees(Rname,Rids)
{
    std::string Ename;
    float Eids;
    this ->nbInf = n;
    Employees *infE = new Employees[n];
    this->inf = infE;
    cout<<"Introduire les infos du 1er employe sous "<<Rname<<" :"<<endl;
    for(int i = 0; i< n; i++){
        if(i>0){
        cout<<"Introduire les infos du "<<i+1 <<"eme employe sous "<<Rname<<" :"<<endl;}
        cout<<"Nom : ";
        cin>> Ename;
        cout<<"Indice de salaire : ";
        cin>>Eids;
        cout<<endl;
        Employees *E = new Employees(Ename,Eids);
        *(this->inf+i) = *E;
        delete E;
    }
}
void Responsables::getInf(){
    for(int i =0; i < this->nbInf; i++){
        (this->inf+i)->showEmployee();
    }
}
float Responsables::salaireTotaleInf(){
    float s = this->calcSalaire();
    for(int i =0; i < this->nbInf; i++){
        s = s + (this->inf+i)->calcSalaire();
    }
    return(s);
}
Responsables::~Responsables()
{
    //dtor
}
