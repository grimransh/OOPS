#include<bits/stdc++.h>
using namespace std;
class Time{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time(int hours=0, int minutes=0, int seconds=0){
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }
        void setTime(int hours, int minutes, int seconds){
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }
        void showTime(){
            cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
        Time operator+(const Time &rhs)const{
            int sec = seconds + rhs.seconds;
            int min = minutes + rhs.minutes + sec / 60;
            int hr = hours + rhs.hours + min / 60;
            sec %= 60;
            min %= 60;
            hr %= 24;
            return Time(hr, min, sec);
        }
        ~Time(){
            cout<<"Destructor called"<<endl;
        }
};
int main(){
    Time t1(10, 20, 30), t2(5, 50, 15), t3;
    t3 = t1 + t2;
    t3.showTime();
    return 0;
}