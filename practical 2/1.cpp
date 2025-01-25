// Write a C++ program to create a class called employee having the following data members:
// Name
// ID
// Salary
// Address



#include<bits/stdc++.h>
using namespace std;
class employee {
    public:
        string name;
        string id;
        int salary;
        string address;
    public: 
        void getdata(){
            cout << "Enter the name of the employee: ";
            cin >> name;
            cout << "Enter the id of the employee: ";
            cin >> id;
            cout << "Enter the salary of the employee: ";
            cin >> salary;
            cout << "Enter the address of the employee: ";
            cin >> address;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Id: " << id << endl;
            cout << "Salary: " << salary << endl;
            cout << "Address: " << address << endl;
        }
}; 
int main(){
    employee e;
    e.getdata();
    e.display();
    return 0;
}