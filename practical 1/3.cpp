#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct phone{
    int code;
    int exchange;
    int number;
};

int  main(){
    phone p1;
    phone p2;
    p1.code=212;
    p1.exchange=767;
    p1.number=8900;
    cout<<"My number is "<<"("<<p1.code<<")"<<" "<<p1.exchange<<"-"<<p1.number<<endl;
    cout<<"enter your code ";
    cin>>p2.code;
    cout<<"enter your exchange";
    cin>>p2.exchange;
    cout<<"enter your number ";
    cin>>p2.number;
    cout<<"Your number is "<<"("<<p2.code<<")"<<" "<<p2.exchange<<"-"<<p2.number;
    return 0;
}