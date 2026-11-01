// Create these two classes:
// 1. Person
//    - protected: name
//    - public: age
//    - A method showPersonDetails() that prints name and age.
// 2. Employee : public Person
//    - private: salary
//    - A method showEmployeeDetails() that prints name, age and salary.
//    - A method setSalary() that updates salary.
// Requirements:
// - Initialise the values through main().
// - Access name directly inside Employee.
// - Try accessing name directly from main() and see what happens.

#include <string>
#include <iostream>
using namespace std;
class Person{
    protected:
    string name;

    public:
    int age;
    void setName(string name) {
        this->name = name;
    }

    void showPersonDetails(){
        cout<< name << endl << age;
    }
};
class Employee: public Person{
    private:
    int salary;

    public:
    void showEmployeeDetails(){
        cout<< name << endl << age << endl << salary;
    }
    void setSalary(int salary){
        if(salary>=0) this->salary = salary;
    }
};

int main(){
    Employee employee;
    employee.setName("Janhavi");
    employee.age=24;
    employee.showPersonDetails();
}