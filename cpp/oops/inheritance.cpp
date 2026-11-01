#include <string>
#include <iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
        void introduce(){
            cout<< name << endl << age << endl;
        }
    };
class Employee: public Person {
    public:
        int employeeId;
        void showEmploeeId(){
            cout<< employeeId << endl;
        }
    };

    int main(){
        Employee employee1;
        employee1.name = "Janhavi";
        employee1.age = 24;
        employee1.employeeId = 101;

        employee1.introduce();
        employee1.showEmploeeId();

    }
