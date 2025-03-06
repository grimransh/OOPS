#include<bits/stdc++.h>
using namespace std;
class Complex{
        float real, imaginary;
    public:
        void ini(){
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
        }
        void add(Complex c1, Complex c2){
            real = c1.real + c2.real;
            imaginary = c1.imaginary + c2.imaginary;
            cout << "Sum: " << real << " + i" << imaginary << endl;
        }
        void subtract(Complex c1, Complex c2){
            real = c1.real - c2.real;
            imaginary = c1.imaginary - c2.imaginary;
            cout << "Difference: " << real << " + i" << imaginary << endl;
        }
        void multiply(Complex c1, Complex c2){
            real = c1.real * c2.real - c1.imaginary * c2.imaginary;
            imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
            cout << "Product: " << real << " + i" << imaginary << endl;
        }
        void divide(Complex c1, Complex c2){
            real = (c1.real * c2.real + c1.imaginary * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
            imaginary = (c1.imaginary * c2.real - c1.real * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
            cout << "Quotient: " << real << " + i" << imaginary << endl;
        }
};
int main(){
    Complex c1, c2, c3;
    c1.ini();
    c2.ini();
    c3.add(c1, c2);
    c3.subtract(c1, c2);
    c3.multiply(c1, c2);
    c3.divide(c1, c2);
    return 0;
}