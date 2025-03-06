// Problem: Write a program to multiply two fractions. Use the following class definition. 
#include<bits/stdc++.h>
using namespace std;
class Faction{
    int numerator,denominator;
    public:
        Faction(int num,int den):numerator(num),denominator(den){}
        void multiply(const Faction& other){
            numerator *= other.numerator;
            denominator *= other.denominator;
        }
        void display(){
            cout<<numerator<<"/"<<denominator<<endl;
        }
};
int main(){
    Faction f1(3,4);
    Faction f2(1,2);
    f1.multiply(f2);
    f1.display();
    return 0;
}