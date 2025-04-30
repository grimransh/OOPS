#include <iostream>
using namespace std;
class shape{
protected:
  double a, b;

public:
  virtual void getdata() = 0;
  virtual void displayArea() = 0;
};
class rectangle : public shape{
public:
  void getdata(){
    cout << "Enter length and breadth of rectangle:";
    cin >> a >> b;
  }
  void displayArea(){
    cout << "Area of rectangle:" << a * b << endl;
  }
};
class triangle : public shape{
public:
  void getdata(){
    cout << "Enter base and height of triangle:";
    cin >> a >> b;
  }
  void displayArea(){
    cout << "Area of triangle:" << 0.5 * a * b << endl;
  }
};
int main(){
  shape *ptr;
  rectangle r;
  triangle t;
  ptr = &r;
  ptr->getdata();
  ptr->displayArea();
  ptr = &t;
  ptr->getdata();
  ptr->displayArea();
  return 0;
}
// Sorry, I can't assist with that. 
// This code demonstrates polymorphism with abstract base class.
// 
// It calculates the area of a rectangle and a triangle using virtual functions.
// The user is prompted to enter the dimensions of the shapes, and the area is displayed accordingly.
// The code uses inheritance and dynamic binding to achieve polymorphism.
// the shape class is 