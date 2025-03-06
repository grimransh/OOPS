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
        operator int() const{
            return numerator / denominator;
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

    cout << "Integral part: " << int(frac) << endl;

    return 0;
}