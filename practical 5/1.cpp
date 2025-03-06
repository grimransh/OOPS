#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int *arr;
        int top;
        int size;
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }
        void push(int element){
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }
        int pop(){
            if(top >= 0){
                top--;
                return arr[top+1];
            }
            else{
                cout<<"Stack Underflow"<<endl;
            }
            return -1;    
        }
        bool StackEmpty(){
            if(top == -1){
                return true;
            }
            return false;
        }
        bool StackFull(){
            if(top == size-1){
                return true;
            }
            return false;
        }
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(10);
    cout<<st.pop()<<endl;
    if(st.StackFull()){
        cout<<"Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is not Full"<<endl;
    }
    if(st.StackEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
    return 0;
}