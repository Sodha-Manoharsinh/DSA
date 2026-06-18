#include <bits/stdc++.h>
using namespace std;

void countDigits(int n)
{
    // int num = n;
    int cnt = n <= 0 ? 0 : log10(n) + 1;

    // while (num > 0)
    // {
    //     num /= 10;
    //     cnt++;
    // }

    cout << cnt;
}

void reverseNum(int n)
{
    int num = n;
    int temp = 0;

    while (num > 0)
    {
        int rem = num % 10;

        if (rem != 0)
        {
            temp *= 10;
            temp += rem;
        }
        num /= 10;
    }
    cout << temp;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    reverseNum(num);
    cout << endl;
    return 0;
}