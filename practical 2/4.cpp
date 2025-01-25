// Program to simulate a toll booth
#include <iostream>
using namespace std;
class toolbooth{
    public:
        unsigned int cars;
        double money;
        toolbooth(){
            cars = 0;
            money = 0;
        }
        void payingCar(){
            cars++;
            money += 0.50;
        }
        void nopayCar(){
            cars++;
        }
        void display(){
            cout << "The Total number of cars passed: " << cars << endl;
            cout << "The Total money collected: $" << money << endl;
        }
};
int main(){
    toolbooth t;
    cout << "Enter P for paying car, N for non-paying car and E for exit: "<< endl;
    while (1){
        char ch;
        cin >> ch;
        if(ch == 'P'){
            t.payingCar();
        }
        else if(ch == 'N'){
            t.nopayCar();
        }
        else if(ch == 'E'){
            t.display();
            break;
        }
        else{
            cout << "Invalid Input" << endl;
            continue;
        }
    }
}