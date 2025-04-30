#include<iostream>
using namespace std;
class publication{
protected:
  string title;
  float price;
public:
void getdata(){
  cout << "Enter title:";
  cin >> title;
  cout << "Enter price:";
  cin >> price;
}
void putdata(){
  cout << "Title:" << title << endl;
  cout << "Price:" << price << endl;
}
};
class book:public publication{
  int page_count;
public: 
void getdata(){
  publication::getdata();
  cout << "Enter page count:";
  cin >> page_count;
}
void putdata(){
  publication::putdata();
  cout << "Page count:" << page_count << endl;
}
};
class tape:public publication{
  float time;
  public:
  void getdata(){
    publication::getdata();
    cout << "Enter time:";
    cin >> time;
  }
  void putdata(){
    publication::putdata();
    cout << "Time:" << time << endl;
  }
};
class pointer:public publication{
  public:
  void getdata(){
    cout << "Enter title:";
    cin >> title;
    cout << "Enter price:";
    cin >> price;
  }
  void putdata(){
    cout << "Title:" << title << endl;
    cout << "Price:" << price << endl;
  }
};
int main(){
  book b;
  tape t;
  pointer p;
  publication *ptr;
  ptr = &b;
  ptr->getdata();
  ptr->putdata();
  ptr = &t;
  ptr->getdata();
  ptr->putdata();
  ptr = &p;
  ptr->getdata();
  ptr->putdata();
  return 0;
}