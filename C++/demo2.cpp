#include <iostream>
using namespace std;
class CS2 {
    public:
    int rollno;
    string name;
    void data(int r , string n){
        rollno = r;
        name = n;
        }
    void displaydata(){
        cout<<"Roll no. is "<<rollno<<endl;
        cout<<"Name is "<<name<<endl;
    }
};

int main(){
    CS2 obj,obj2;
    obj.data(31,"RACHIT");
    obj2.data(30,"SANJAY");
    obj.displaydata();
    obj2.displaydata();
}