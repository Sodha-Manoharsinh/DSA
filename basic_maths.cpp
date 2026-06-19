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

        temp = (temp * 10) + rem;
        num /= 10;
    }
    cout << temp;
}

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int num = x;
    long long rev = 0;
    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return x == rev;
}

bool isArmstrong(int x)
{
    int n = (int)(log10(x)) + 1;
    int num = x;
    int newNum = 0;

    while (num != 0)
    {
        int rem = num % 10;
        num /= 10;
        newNum += round(pow(rem, n));
    }
    return newNum == x;
}

void printAllDivisors(int x)
{
    cout << "All divisors of " << x << " are: " << endl;
    int lim = round(sqrt(x));
    vector<int> divs;
    for (int i = 1; i <= lim; i++)
    {
        if (x % i == 0)
        {
            divs.push_back(i);
            if (x / i != i)
            {
                divs.push_back(x / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    for (auto it : divs)
    {
        cout << it << " ";
    }
}

bool checkPrime(int x)
{
    if (x <= 1)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;

    for (int i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

// gcd greatest common divisor using Euclidean Algorithm
int gcd(int a, int b) // O(log phi (min(a,b)))
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
        return b;
    return a;
}

int main()
{
    int num, num1;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a number: ";
    cin >> num1;
    int result = gcd(num, num1);
    cout << result << endl;
    return 0;
}