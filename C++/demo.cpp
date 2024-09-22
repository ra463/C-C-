#include <iostream>
using namespace std;
class Demo
{
    public:
    int rollno;
    string name;
    int show(){
        cout<<"Show function is being called."<<endl;
    }
};

int main(){
    Demo obj;
    obj.rollno=101;
    obj.show();
    obj.name="RACHIT PATEL";
    cout<<"Roll no. of student is: "<<obj.rollno<<endl;
    cout<<"The name of student is "<<obj.name<<endl;
}