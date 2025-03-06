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
    Fraction operator[](int index) const{
        if (index == 0){
            return Fraction(0, 1);
        }
        else{
            int newNumerator = numerator % denominator;
            int newDenominator = denominator;
            return Fraction(newNumerator, newDenominator);
        }
    }
    ~Fraction(){
        cout << "Destructor called." << endl;
    }
};

int main(){
    Fraction frac(18, 5);

    cout << "Fraction: ";
    frac.displayFraction();
    cout << endl;

    Fraction fracPart = frac[1];

    cout << "Fractional part: ";
    fracPart.displayFraction();
    cout << endl;

    return 0;
}