#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
        int *arr;
        int front;
        int rear;
        int size;
        public:
        Queue(){
            size = 100001;
            arr = new int[size];
            front = 0;
            rear = 0;
        }
        void insertqueue(int data){
            if(rear == size){
                cout<<"Queue is Full"<<endl;
            }
            else{
                arr[rear] = data;
                rear++;
            }
        }
        void deletequeue(){
            if(front == rear){
                return;
            }
            else{
                int ans = arr[front];
                arr[front] = -1;
                front++;
                if(front == rear){
                    front = rear = 0;
                }
            }
        }
        int display(){
            if(front == rear){
                return -1;
            }
            else{
                return arr[front];
            }
        }
};
int main(){
    Queue q;
    q.insertqueue(6);
    q.insertqueue(7);
    cout << q.display() << endl;
    q.deletequeue();
    cout << q.display() << endl;

    return 0;
}