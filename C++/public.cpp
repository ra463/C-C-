#include <iostream>
using namespace std;
class A
{
    public: //Access Specifier
    int x=100; //Data Member of classs A
    int display(){
        cout<<"display the value of x. "<<endl;
        cout<<"Value of x is: "<< x <<endl;
    }
};

int main(){
    A obj; // creating the object of class
    obj.display();
}