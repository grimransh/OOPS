#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Set{
    private:
        vector<int> elements;
            bool contains(int e) const {
            return std::find(elements.begin(), elements.end(), e) !=elements.end();
        }

    public:
        bool add(int e) {
            if (find(elements.begin(), elements.end(), e) !=elements.end()){
            return false;
        }
            elements.push_back(e);
            return true;
    }
    void list() const {
        cout << "Elements: ";
        for(int i=0; i<elements.size(); i++) {
            cout << elements[i] <<" ";
        }
        cout<<" " <<endl;
    }
    Set intersection(Set& s1){
        Set res;
        for (int i=0; i<elements.size(); i++) {
            if (s1.contains(elements[i])) {
                res.add(elements[i]);
            }
        }
        return res;
    }
    Set unionset(const Set& s1) const{
        Set result = *this;
        for (int i=0; i<s1.elements.size(); i++) {
            result.add(s1.elements[i]);
        }
        return result;
    }
};
int main(){
    Set set1, set2;
    set1.add(1);
    set1.add(3);
    set1.add(6);
    set1.add(9);
    set1.add(3);
    set2.add(3);
    set2.add(56);
    set2.add(8);
    set2.add(6);
    cout<<"Set 1";
    set1.list();
    cout<<"Set 2";
    set2.list();
    Set intersection =set1.intersection(set2);
    cout << "Intersection";
    intersection.list();
    Set union_set = set1.unionset(set2);
    cout << "Union ";
    union_set.list();
    return 0;

}