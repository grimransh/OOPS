#include<iostream>
using namespace std;
class a{
  int* p;
  public:
    a(){
      p = new int;
      *p = 10;
    }
    void display(){
      cout << *p << endl;
    }
    ~a(){
      delete p;
    }
};
class b:public a{
  int* q;
  public:
    b(){
      q = new int;
      *q = 20;
    }
    void display(){
      a::display();
      cout << *q << endl;
    }
    ~b(){
      delete q;
    }
};
int main(){
  cout << "Created" <<endl;
  b obj;
  cout << "deleted "<< endl;
  return 0;
}