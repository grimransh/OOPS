#include <iostream>
using namespace std;
class String {
    char* str;
    public:

    String(const char* s) { 
        int len = 0 ; 
        while (s[len] !='\0')len++;
        str= new char[len + 1]; 
        for (int i = 0 ;i < len; i++ ) str[i] = s[i];
        str[len]='\0';
    }     

    ~String() {

    cout<<"The string has been destroyed"; 
    delete[] str; 
    } 
    void display() const { 
        cout<<str<<endl<<endl;

    }

    void upit(){
        char* p = str;
        while (*p) { 
            if (*p>='a' &&*p<='z') {
                *p=*p-'a' +'A';
            }
            p++;
        }
    }

};

int main() {
    String s("HelLO, WoRlD!"); 
    cout<<"Before Capitalization:";
    s.display();
    s.upit();
    cout<<"After Capitalization:";
    s.display();
    return 0;
}