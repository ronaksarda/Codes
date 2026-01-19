#include<iostream>
using namespace std;
class Employee{
    private:
        float basicPay, hra, da;
    public:
        void getData(){
            cout << "Enter Basic Pay: ";
            cin >> basicPay;
            cout << "Enter HRA: ";
            cin >> hra;
            cout << "Enter DA: ";
            cin >> da;
        }
        float calculateGrossSalary(){
            return basicPay + hra + da;
        }

        void displaySalary(){
            float Salary = calculateGrossSalary();
            cout << "Gross Salary: " << Salary << endl;
        }
};
int main(){
    Employee e1,e2,e3;
    cout << "Enter details for Employee 1:" << endl;
    e1.getData();
    cout << "Enter details for Employee 2:" << endl;
    e2.getData();
    cout << "Enter details for Employee 3:" << endl;
    e3.getData();
    cout << "\nEmployee 1 ";
    e1.displaySalary();
    cout << "Employee 2 ";
    e2.displaySalary();
    cout << "Employee 3 ";
    e3.displaySalary();
    return 0;
}