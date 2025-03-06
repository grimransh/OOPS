#include<bits/stdc++.h>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(int feet=0, float inches=0){
            this->feet = feet;
            this->inches = inches;
        }
        void getDistance(){
            cout<<"Enter feet: ";
            cin>>feet;
            cout<<"Enter inches: ";
            cin>>inches;
        }
        void showDistance(){
            cout<<feet<<"\'-"<<inches<<"\""<<endl;
        }
        Distance operator-(const Distance &rhs){
            int f = feet - rhs.feet;
            float i = inches - rhs.inches;
            if(i < 0){
                f--;
                i += 12;
            }
            return Distance(f, i);
        }
        ~Distance(){
            cout<<"Destructor called"<<endl;
        }
};

int main(){
    Distance d1, d2, d3;
    d1.getDistance();
    d2.getDistance();
    d3 = d1 - d2;
    d3.showDistance();
    return 0;
}