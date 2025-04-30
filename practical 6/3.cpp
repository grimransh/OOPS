#include <iostream>
using namespace std;
class Array{
    int length;
    int* data;
    bool extend() {
        int *temp = new int[length + 1];
        if (!temp) {
        return false;
        }
        for (int i=0; i < length; ++i) {
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        length++;
        return true;
    }

    bool contract() {
        int *temp = new int[length - 1];
        if (!temp) {
        return false;
        }
        for (int i=0; i<length - 1; ++i) {
        temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        length--;
        return true;
    }

    public:
        Array(){
            length=0; 
            data-NULL;
        }
        Array(const Array& A1): length(A1.length) {
        if (A1.data) {
            data= new int[length];
            for (int i=0; i<length; ++i) {
                data[i] = A1.data[i];
            }
        }
            else data = NULL;
        }
        ~Array() {
            delete[] data;
        }
        bool append(int value) {
            if (!extend()) {
                return false;
            }
            data[length-1] = value;
            return true;
        }
        bool chop() {
            if (length == 0) { 
                return false; 
            } if (!contract()) { 
                return false; 
            }
            return true;
        }
        void print() const {
        cout << "[";
        for (int i=0; i < length; ++i){
            cout << data[i];
            if (i<length-1) {
            cout<<",";
            }
        }
            cout << "]" << std::endl;
        }
};
int main(){
    Array a; 
    a.append(1);
    a.append(4);
    a.append(6);    
    a.append(2);
    cout << "Array: ";
    a.print();    
    a.chop();
    cout << "Array after chopping. ";
    a.print();
    return 0; 
}