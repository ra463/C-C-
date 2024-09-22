#include <iostream>
using namespace std;

class A{
    public:
        int length,width;
        virtual int getarea()=0;
        void getwidth(int w){
            width=w;
          
        }
        void getlength(int l){
            length=l;
            
        }

};
class B:public A{
    public:
        int getarea(){
            return (length*width);
        }
};
int main(){
    B obj;
    obj.getlength(10);
    obj.getwidth(20);
    cout<<obj.getarea();
}