#include<iostream>
using namespace std;
class student{
    string name, gender;    
    int rollno, age;
    float marks;
    public:
    void getdata(string n, string g, int r, float m,int a){
        name = n;
        gender = g;
        rollno = r;
        marks = m;
        age = a;    
    }
    void display(){
        cout<<" Name: "<<name<<endl;
        cout<<" Gender: "<<gender<<endl;
        cout<<" Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<" Age: "<<age<<endl;
        cout<<endl<<endl;
    }
};
int main(){
    student s;
    student *ptr;
    ptr=&s, 
    s.getdata("Rahul", "Male", 5011, 96, 16); 
    ptr->getdata("Ram", "Male", 5096, 94.5, 17);
    s.display();
    ptr->display();
    return 0;
}