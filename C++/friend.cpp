#include <iostream>
using namespace std;

class A{
    public:
        int a,b;
        int getdata(int x, int y){
            a=x;
            b=y;
        }
        friend int sum(A s);
};

int sum(A s){
    return s.a + s.b;
}

int main(){
    A obj;
    int s1;
    obj.getdata(10,20);
    s1 = sum(obj);
    cout<<"sum of number is: "<<s1<<endl;
}
