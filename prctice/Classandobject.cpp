#include <iostream>
using namespace std;

class Form
{
    int age;
    int id;

public:
    void setData(int a, int i)
    {
        if (a > 0)
        {
            age = a;
        }
        else
        {
            cout << "Age is not valid" << endl;
        }
        id = i;
    }

    void getData()
    {
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Form f1;
    f1.setData(20, 101);
    f1.getData();
    return 0;
}