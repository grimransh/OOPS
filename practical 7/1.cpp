#include<iostream>
using namespace std;
class Student{
  protected:
    string name;
    int roll;
};
class Exam{
  protected:
    int mathMarks, scienceMarks, englishMarks, hindiMarks, socialMarks, coumputerMarks;
};
class Result : public Student, public Exam {
  int totalMarks;

  public:
    void getDetails() {
      cout << "Enter the roll number: ";
      cin >> roll;
      cout << "Enter the name: ";
      cin >> name;
      cout << "Enter the marks in Maths: ";
      cin >> mathMarks;
      cout << "Enter the marks in Science: ";
      cin >> scienceMarks;
      cout << "Enter the marks in English: ";
      cin >> englishMarks;
      cout << "Enter the marks in Hindi: ";
      cin >> hindiMarks;
      cout << "Enter the marks in Social: ";
      cin >> socialMarks;
      cout << "Enter the marks in Computer: ";
      cin >> coumputerMarks;
    }

    void displayDetails() {
      cout << "Roll Number: " << roll << endl;
      cout << "Name: " << name << endl;
      cout << "Marks in Maths: " << mathMarks << endl;
      cout << "Marks in Science: " << scienceMarks << endl;
      cout << "Marks in English: " << englishMarks << endl;
      cout << "Marks in Hindi: " << hindiMarks << endl;
      cout << "Marks in Social: " << socialMarks << endl;
      cout << "Marks in Computer: " << coumputerMarks << endl;
    }

    void displayTotal() {
      totalMarks = mathMarks + scienceMarks + englishMarks + hindiMarks + socialMarks + coumputerMarks;
      cout << "Total Marks: " << totalMarks << endl;
    }
};
int main() {
  Result r;
  r.getDetails();
  r.displayDetails();
  r.displayTotal();
  return 0;
}
