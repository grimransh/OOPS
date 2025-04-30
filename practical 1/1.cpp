#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

struct employee{
    private:
        char name[20];
        int id;
        int salary;
        string address;
    public:
        void get_data();
        void display_data();    
};
void employee::get_data(){
    cout<<"Enter the details of the Employee name , id , salary and address"<<endl;
    cin>>name;
    cin>>id;
    cin>>salary;
    cin>>address;
}
void employee::display_data(){
    cout<<"Name of the employee is "<<name<<endl;
    cout<<"Id of the employee is "<<id<<endl;
    cout<<"Salary of the employee is "<<salary<<endl;
    cout<<"Address of the employee is "<<address;
}
int main(){
    employee emp1;
    emp1.get_data();
    emp1.display_data();
    return 0;
}