#ifndef RESPONSABLES_H
#define RESPONSABLES_H
#include"Employees.h"

class Responsables : public Employees
{
    public:
        Responsables(std::string Rname,  float Rids, int n);
        float salaireTotaleInf();
        void getInf();
        ~Responsables();

    protected:

    private:
        int nbInf;
        Employees* inf;
};

#endif // RESPONSABLES_H
