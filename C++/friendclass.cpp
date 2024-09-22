#include <iostream>
using namespace std;

class A{
    friend class B;
    private:
        int length;
    public:
        void getlength(){
            int l;
            cout<<"Enter the dimension : ";
            cin>>l;
            length=l;
        }
};
class B{
    public:
        void getvalues(){
            A obj;
            obj.getlength();
            int side=obj.length;
            cout<<"The cube of length is "<<(side*side*side)<<" cm^3";
        }
};
int main(){
    B b;
    b.getvalues();
}