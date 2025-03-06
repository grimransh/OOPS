// Problem: Write a class Fraction that has two data members numerator and denominator. The class should have
#include<bits/stdc++.h>
using namespace std;
class Fraction{
    int numerator, denominator;
    public:
        Fraction(int num, int den): numerator(num), denominator(den){}
        
        void subtract(const Fraction& other){
            int new_numerator = numerator * other.denominator - other.numerator * denominator;
            int new_denominator = denominator * other.denominator;
            numerator = new_numerator;
            denominator = new_denominator;
        }
        
        void display(){
            cout << numerator << "/" << denominator << endl;
        }
};;
int main(){
    Fraction f1(3, 4);
    Fraction f2(1, 2);
    f1.subtract(f2);
    f1.display();
    return 0;
}
