// Problem: Average of distances


#include<bits/stdc++.h>
using namespace std;
class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        };
        void getDistance(){
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        };
        void showDistance(){
            cout << "Feet: " << feet << " Inches: " << inches << endl;
        };
        void addDistance(Distance d1, Distance d2){
            feet = d1.feet + d2.feet;
            inches = d1.inches + d2.inches;
            if(inches >= 12){
                feet++;
                inches -= 12;
            }
        };
        void divDistance(int divisor){
            float totalInches = feet * 12 + inches;
            totalInches /= divisor;
            feet = totalInches / 12;
            inches = totalInches - feet * 12;
        };
};

int main(){
    Distance distance[100];
    int count = 0;
    int n;
    cout << "Enter number of distances: "<<endl;
    cin >> n;
    do{
        cout << "Enter distance #" << count + 1 << endl;
        distance[count++].getDistance();
        n--;
    }while (n && count<100);
    
    Distance total;
    for(int i = 0; i < count; i++){
        total.addDistance(total, distance[i]);
    }
    total.divDistance(count);
    cout << "Average distance: ";
    total.showDistance();
    return 0;
}