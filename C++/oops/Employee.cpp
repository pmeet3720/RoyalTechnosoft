// constructors -- default, para, copy
#include<iostream>
#include<string>

using namespace std;

class Employee{
    private:
        int id;
        long salary;
        string name;

    public:
        Employee(){
            cout << "Start: Default Constructor"<< endl;
            this->id = 1;
            this->salary = 320000;
            this->name = "Meet Patel";
        }

        Employee(int id, long salary, string name){
            cout << "Start: Parametrized constructor" << " " << this << endl;
            this->id = id;
            this->salary = salary;
            this->name = name;
        }

        // copy constructor
        Employee(Employee &e){
            cout << "Start: Copy Constructor" << " " << this << endl;
            this->id = e.id;
            this->salary = e.salary;
            this->name = e.name;
        }

        void displayData(){
            cout << id << " " << salary << " " << name << endl;
        }
};

int main(){
    Employee e1(101, 45000, "Kabir Patel");
    e1.displayData();

    Employee e2(e1); // constructor clone
    e2.displayData();
    return 0;
}