#include <iostream>
using namespace std;

class A
{
protected:
    int age;
    int id;

public:
    A(){};
    A(int a, int b)
    {
        age = a;
        id = b;
    }
};

class B : public A
{
protected:
    int rollno;

public:
    B(int a, int b, int c) : A(a, b)
    {
        rollno = c;
    }
};

class C : public B
{
    int marks;

public:
    C(int a, int b, int c, int d) : B(a, b, c)
    {
        marks = d;
    }
    void getData()
    {
        cout << "The value of age is: " << age << endl;
        cout << "The value of id is: " << id << endl;
        cout << "The value of rollno is: " << rollno << endl;
        cout<<"The value of marks is: "<<marks<<endl;
    }
};

int main()
{
    C c1(10, 20, 30, 40);
    c1.getData();
    return 0;
}