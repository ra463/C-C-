#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

/* OUTPUT */

/* 1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5 */

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/* OUTPUT */

/* 1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 */

// descending order star pattern
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/* OUTPUT */

/* 5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1 */

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << j * j << " ";
        }
        cout << endl;
    }
    return 0;
}

// OUTPUT

/* 1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25 */

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        char a = 'a' + i - 1;
        for (j = 1; j <= 5; j++)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    return 0;
}

// OUTPUT

/* a a a a a
b b b b b
c c c c c
d d d d d
e e e e e */

int main()
{
    int i;
    char j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 'a'; j <= 'e'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// OUTPUT

/* a b c d e
a b c d e
a b c d e
a b c d e
a b c d e */

int main()
{
    int i, j, count = 0;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << count + 1 << " ";
            count = count + 1;
        }
        cout << endl;
    }
    return 0;
}

// OUTPUT

/* 1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25 */