#include <iostream>
using namespace std;

class publication{
  string title;
  float price;
  public:
    void getData(){
      cout << "Enter title: ";
      cin >> title;
      cout << "Enter price: ";
      cin >> price;
    }
    void putData(){
      cout << "Title: " << title << endl;
      cout << "Price: " << price << endl;
    }
};

class book : public publication{
  int page_count;
  public:
    void getData(){
      publication::getData();
      cout << "Enter page count: ";
      cin >> page_count;
    }
    void putData(){
      publication::putData();
      cout << "Page count: " << page_count << endl;
    }
};

class tape : public publication{
  float time;
  public:
    void getData(){
      publication::getData();
      cout << "Enter time: ";
      cin >> time;
    }
    void putData(){
      publication::putData();
      cout << "Time: " << time << endl;
    }
};

int main(){
  book b;
  tape t;
  b.getData();
  t.getData();
  b.putData();
  t.putData();
  return 0;
}