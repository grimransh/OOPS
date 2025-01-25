// Problem: Write a program to create a class Employee with data members as name and employee number. Read n employee details and display the details of the employees.

#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
        char name[30];
        long Num;
    public:
        void getdata(){
            cout << "Enter the name of the employee: ";
            cin >> name;
            cout << "Enter the ID of the employee: ";
            cin >> Num;
        };
        void putdata(){
            cout << "Name: " << name << endl;
            cout << "ID: " << Num << endl;
        };
};
int main(){
    Employee s[10];
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        s[i].getdata();
    }
    cout << "The details of the employees are: " << endl;
    for(int i = 0; i < n; i++){
        s[i].putdata();
    }
    return 0;

}