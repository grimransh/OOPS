#include <iostream>
using namespace std;

class Length{
public:
  virtual void defineLength() = 0;
  virtual void displayLength() = 0;
};

class MetricLength : public Length{
  float millimeter;
  float centimeter;
  float meter;
  float totalLength;

public:
  void defineLength(){
    cout << "Enter length in millimeter: ";
    cin >> millimeter;
    cout << "Enter length in centimeter: ";
    cin >> centimeter;
    cout << "Enter length in meter: ";
    cin >> meter;
  }
  void displayLength(){
    totalLength = millimeter + centimeter + meter;
    cout << "Total length is: " << totalLength << endl;
  }
};

class EnglishLength : public Length{
  float inch;
  float foot;
  float yard;
  float totalLength;

public:
  void defineLength(){
    cout << "Enter length in inch: ";
    cin >> inch;
    cout << "Enter length in foot: ";
    cin >> foot;
    cout << "Enter length in yard: ";
    cin >> yard;
  }
  void displayLength(){
    totalLength = inch + foot + yard;
    cout << "Total length is: " << totalLength << endl;
  }
};

int main(){
  MetricLength m;
  EnglishLength e;
  Length *l;
  l = &m;
  l->defineLength();
  l->displayLength();
  l = &e;
  l->defineLength();
  l->displayLength();
  return 0;
}