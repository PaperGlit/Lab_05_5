#include <iostream>

using namespace std;

int Pascal1(int i, int j)
{
    if (j == 1 || i == j)
        return 1;
    return (Pascal1(i - 1, j - 1) + Pascal1(i - 1, j));
}

void Pascal2(int a, int b, int i)
{
    if (b < i - a + 1)
    {
        cout << "   ";
        Pascal2(a ,b + 1, i);
    }
}

void Pascal3(int a, int b)
{
    if (b <= a)
    {
        cout << Pascal1(a, b) << "   ";
        Pascal3(a, b + 1);
    }
}

void Pascal(int a, int i)
{
    if (a <= i)
    {
        Pascal2(a , 1, i);
        Pascal3(a, 1);
        cout << endl;
        Pascal(a + 1, i);
    }
}

int main() 
{
    int n;

    cout << "n = "; cin >> n;

    Pascal(1, n);

    return 0;
}