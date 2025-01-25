// Write a C++ program to add two numbers using a class called Int. The class should have a data member a and two member functions getvalue() and display() to get the values from the user and display the sum of the two numbers respectively.


#include<bits/stdc++.h>
using namespace std;
class Int{
    public:
        int a;
        Int(){
            a = 0;
        }
        void getvalue(){
            int b;
            // cout << "5Enter the Number: ";
            cin >> b;
            a = b;
        }
        void display(){
            cout << "The Number is: " << a << endl;
        }
};
int main(){
    Int i1, i2, i3;
    cout << "Enter the first number: ";
    i1.getvalue();
    cout << "Enter the second number: ";
    i2.getvalue();
    i3.a = i1.a + i2.a;
    i3.display();
    return 0;    
}