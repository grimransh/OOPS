#include<bits/stdc++.h>
using namespace std;
class Sample1;
class Sample{
    int i;
    public:
        void enterdata(int i){
            this->i = i;
        }
        friend void compare(Sample s1, Sample1 s2);    
};
class Sample1{
    int j;
    public: 
        void enterdata(int j){
            this->j = j;
        }
        friend void compare(Sample s1, Sample1 s2);
};
void compare(Sample s1, Sample1 s2){
    if(s1.i > s2.j){
        cout << "Sample 1 is greater" << endl;
    }else if(s1.i < s2.j){
        cout << "Sample 2 is greater" << endl;
    }else{
        cout << "Both are equal" << endl;
    }
}
int main(){
    Sample s1;
    Sample1 s2;
    int a, b;
    cout << "Enter data for sample 1: ";
    cin >> a;
    cout << "Enter data for sample 2: ";
    cin >> b;
    s1.enterdata(a);
    s2.enterdata(b);
    compare(s1, s2);
    return 0;
}