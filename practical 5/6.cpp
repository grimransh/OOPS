#include <iostream>
using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator = 0, int denominator = 1){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void setFraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void displayFraction() const{
        cout << numerator << "/" << denominator;
    }
    friend bool operator>(const Fraction &lhs, const Fraction &rhs){
        return (double)lhs.numerator / lhs.denominator > (double)rhs.numerator / rhs.denominator;
    }
    ~Fraction(){
        cout << "Destructor called." << endl;
    }
};

int main(){
    Fraction frac1(3, 4);
    Fraction frac2(5, 8);

    cout << "Fraction 1: ";
    frac1.displayFraction();
    cout << endl;

    cout << "Fraction 2: ";
    frac2.displayFraction();
    cout << endl;

    bool isGreaterThan = frac1 > frac2;
    cout << "Fraction 1 > Fraction 2? " << (isGreaterThan ? "true" : "false") << endl;

    return 0;
}
