#include<bits/stdc++.h>
using namespace std;
class Faction{
    int numerator,denominator;
    public:
        Faction(int num,int den):numerator(num),denominator(den){}
        void display(){
            cout<<numerator<<"/"<<denominator<<endl;
        }
        friend void divide(Faction& f1, Faction& f2){
            f1.numerator *= f2.denominator;
            f1.denominator *= f2.numerator;
        }
};
int main(){
    Faction f1(2,3),f2(3,4);
    divide(f1,f2);
    f1.display();
    return 0;
}