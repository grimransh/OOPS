//  program to add two time objects

#include<bits/stdc++.h> 
using namespace std;
class Time{
    int hours,minutes,seconds;
    public:
        Time(){
            hours=0;
            minutes=0;
            seconds=0;
        }
        Time(int h,int m,int s){
            hours=h;
            minutes=m;
            seconds=s;
        }
        void addTime(Time x, Time y){
            seconds = x.seconds + y.seconds;
            minutes = x.minutes + y.minutes + seconds / 60;
            hours = x.hours + y.hours + minutes / 60;
            seconds %= 60;
            minutes %= 60;
        }
        void showTime(){
            cout<<"Time is: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
};
int main(){
    Time t1(2,45,30),t2(3,30,30),t3;
    t3.addTime(t1,t2);
    t3.showTime();
    return 0;
}