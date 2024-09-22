#include <iostream>
using namespace std;

int fun();

// template --> By using template we can create a function which can work with different data types
template <typename T>
void add(T x, T y)
{
    cout << "The addition is " << x + y << endl;
}

template <typename T>
void add(T x, T y, T z)
{
    cout << "The addition is " << x + y + z << endl;
}

template <typename T, typename U>
void add(T x, T y, U z)
{
    cout << "The addition is " << x + y + z << endl;
}

// void add(int x, int y)
// {
//     cout << "The addition is " << x + y << endl;
// }

// void add(double x, double y)
// {
//     cout << "The addition is " << x + y << endl;
// }

// void add(string s, string t)
// {
//     cout << "The full value is " << s + t << endl;
// }

int main()
{
    add(10, 20);
    add(10.34, 23.56);
    add(10, 20, 30);
    add(10, 20, 30.45);
    string s1 = "Hii ";
    string s2 = "Rachit";
    add(s1, s2);

    if (fun())
    {
        cout << "The function is executed";
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int fun()
{
    cout << "Hello World" << endl;
    return 1;
}