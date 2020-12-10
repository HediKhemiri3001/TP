#ifndef EMPLOYEES_H
#define EMPLOYEES_H
#include<string>
class Employees
{
    public:
        Employees();
        Employees(std::string name, float ids);
        virtual ~Employees();
        void showEmployee();
        float calcSalaire();
        static float valDeSalaire;
        static int nbEmp;

    protected:

    private:
        std::string name;
        int matricule;
        float ids;
};

#endif // EMPLOYEES_H
