#include<iostream>
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
class book:public publication{
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
class tape:public publication{
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
class sales{
  float sales[3];
  public:
    void getData(){
      cout << "Enter sales for 3 months: ";
      for(int i = 0; i < 3; i++){
        cin >> sales[i];
      }
    }
    void putData(){
      cout << "Sales for 3 months: ";
      for(int i = 0; i < 3; i++){
        cout << sales[i] << " ";
      }
      cout << endl;
    }
};
int main(){
  book b;
  tape t;
  sales s;
  b.getData();
  t.getData();
  s.getData();
  b.putData();
  t.putData();
  s.putData();
  return 0;
}