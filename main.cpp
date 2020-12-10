#include <iostream>
#include"Employees.h"
#include"Responsables.h"

using namespace std;

float salaireTotale(Responsables* R1, Responsables* R2, Responsables* R3){
    return(R1->salaireTotaleInf() + R2 ->salaireTotaleInf() + R3 ->salaireTotaleInf());
}

int main()
{
    Responsables* R1 = new Responsables("Sadek",3.5,2);
    Responsables* R2 = new Responsables("Ahmed",3.5,2);
    Responsables* R3 = new Responsables("Hatem",3.5,2);
    cout<<"Le salaire de tout les employes (les responsables inclus) est : "<< salaireTotale(R1,R2,R3)<<endl;

    return 0;
}
