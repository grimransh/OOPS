#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct point{
    int i,j;
    void get_input(){
        cin>>i>>j;
    }
    void display_output(point p1,point p2){
        i=p1.i+p2.i;
        j=p1.j+p2.j;
        cout<<i<<" "<<j;
    }
};

int main(){
    point p1;
    point p2;
    point p3;
    cout<<"enter point 1";
    p1.get_input();
    cout<<"enter point 2";
    p2.get_input();
    cout<<"Point three is ";
    p3.display_output(p1,p2);
    return 0;
}