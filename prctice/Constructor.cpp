#include <iostream>
using namespace std;

class A
{
    int age;
    int id;

public:
    A()
    {
        cout<<"Value of this pointer: "<<this<<endl;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter id: ";
        cin >> id;
        // age = a;
        // id = b;

        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    A a1;
    return 0;
}