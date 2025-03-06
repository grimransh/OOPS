#include<bits/stdc++.h>
using namespace std;
class Array{
    private:
        int *arr;
        int size;
    public:
        Array(int size, int x[]){
            this->size = size;
            arr = new int[size];
            for(int i = 0; i < size; i++){
                arr[i] = x[i];
            }
        }
        ~Array(){
            delete[] arr;
        }
        Array(const Array &i){
            size = i.size;
            arr = new int[size];
            for(int j = 0; j < size; j++){
                arr[j] = i.arr[j];
            }
        }
        // Binary Search
        int binarySearch(int value){
            int left = 0;
            int right = size - 1;
            while(left <= right){
                int mid = left + (right - left) / 2;
                if(arr[mid] == value){
                    return mid;
                }
                else if(arr[mid] < value){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            return -1;
        }
        // Selection Sort
        void selectionSort(){
            for(int i = 0; i < size - 1; i++){
                int min = i;
                for(int j = i + 1; j < size; j++){
                    if(arr[j] < arr[min]){
                        min = j;
                    }
                }
                if(min != i){
                    int temp = arr[i];
                    arr[i] = arr[min];
                    arr[min] = temp;
                }
            }
        }
        void display(){
            for(int i = 0; i < size; i++){
                cout<<arr[i]<<"\t";
            }
            cout<<endl;
        }
};

int main(){
    int x[] = {1, 2, 4, 6, 7};
    Array a1(5, x);
    cout<<a1.binarySearch(4)<<endl;
    a1.selectionSort();
    a1.display();
    return 0;
}