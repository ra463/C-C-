#include <iostream>
using namespace std;

class A{
    public:
        int x;
        A(){
            x=100;
            cout<<"value of x: "<<x<<endl;
        }
        A(A&obj){
            int y;
            y=obj.x;
            cout<<"after copy x: "<<y<<endl;
        }
};
int main(){
    A a;
    A a1(a);
}