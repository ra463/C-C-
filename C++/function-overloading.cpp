#include <iostream>
using namespace std;

class A{
    public:
        void add(int i,int j){
            cout<<"add "<<i+j<<endl;
        }
        void add(float x,float y){
            cout<<"add "<<x+y<<endl;
        }
        void add(double x){
            cout<<"add "<<x+x<<endl;
        }
};
int main(){
    A a;
    a.add(10,20);
    a.add(2.3f,3.4f);
    a.add(10);
}