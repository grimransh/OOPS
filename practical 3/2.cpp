// Problem: Student class with roll number, name, address, city, branch, pincode, semester, rank.

#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll_number;
        char student_name[30];
        char student_address[30];
        char student_city[30];
        string student_branch;
        int student_pincode;
        int student_semester;
        int student_rank;
        void getdata(){
            cout << "Enter the roll number of the student: ";
            cin >> roll_number;
            cout << "Enter the name of the student: ";
            cin >> student_name;
            cout << "Enter the address of the student: ";
            cin >> student_address;
            cout << "Enter the city of the student: ";
            cin >> student_city;
            cout << "Enter the branch of the student: ";
            cin >> student_branch;
            cout << "Enter the pincode of the student: ";
            cin >> student_pincode;
            cout << "Enter the semester of the student: ";
            cin >> student_semester;
            cout << "Enter the rank of the student: ";
            cin >> student_rank;
        };
        void putdata(){
            cout << "Roll number: " << roll_number << endl;
            cout << "Name: " << student_name << endl;
            cout << "Address: " << student_address << endl;
            cout << "City: " << student_city << endl;
            cout << "Branch: " << student_branch << endl;
            cout << "Pincode: " << student_pincode << endl;
            cout << "Semester: " << student_semester << endl;
            cout << "Rank: " << student_rank << endl;
        };

};
int main(){
    Student s[10];
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        s[i].getdata();
    }
    string branch;
    cout << endl << endl 
    << "Enter the branch of the student: ";
    cin >> branch;


    for(int i = 0; i < n; i++){
        if(s[i].student_branch == branch){
            s[i].putdata();
        }
        else{
            cout << "No student found in the branch" << endl;
        }
    }
    return 0;
}
