#include <iostream>
using namespace std;

class Employee{
public:
  virtual void raiseSalary() = 0;
  virtual void promote() = 0;
};

class Engineer : public Employee{
public:
  void raiseSalary(){
    cout << "Engineer: raiseSalary" << endl;
  }
  void promote(){
    cout << "Engineer: promote" << endl;
  }
};

class Manager : public Employee{
public:
  void raiseSalary(){
    cout << "Manager: raiseSalary" << endl;
  }
  void promote(){
    cout << "Manager: promote" << endl;
  }
};

int main(){
  Employee *e1;
  Engineer e2;
  Manager e3;
  e1 = &e2;
  e1->raiseSalary();
  e1->promote();
  e1 = &e3;
  e1->raiseSalary();
  e1->promote();
  return 0;
}