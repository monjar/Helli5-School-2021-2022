#include <iostream>
using namespace std;

void printNumbers(int n);

int main()
{
    int n = 0;
    cin >> n;

    if (n > 10)
        cout << "N IS BIG.";
    else
        cout << n << endl;

    printNumbers(n);
}

void printNumbers(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
}