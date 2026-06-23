#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
    if (n <= 0)
        return;
    cout << "Manoharsinh" << endl;
    printName(n - 1);
}

void print1toN(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    print1toN(i + 1, n);
}

void printNto1(int i, int n)
{
    if (n < i)
    {
        return;
    }
    cout << n << " ";
    printNto1(i, n - 1);
}

void print1toNbacktract(int i, int n)
{
    if (n < i)
    {
        return;
    }
    print1toNbacktract(i, n - 1);
    cout << n << " ";
}

void printNto1backtract(int i, int n)
{
    if (n < i)
    {
        return;
    }
    printNto1backtract(i + 1, n);
    cout << i << " ";
}

int sumOfFirstNNumber(int n)
{
    if (n < 1)
        return 0;
    return sumOfFirstNNumber(n - 1) + n;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return factorial(n - 1) * n;
}

int main()
{
    int num;
    cin >> num;
    int result = factorial(num);
    cout << result << endl;
    return 0;
}