#include <iostream>
using namespace std;

int apTerm(int n)
{
    return 3 * n + 7;
}

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;

    int result = apTerm(n);
    cout << result<< endl;

    return 0;
}


//   ----- pow(a, b) program  -----

int power(int a, int b)
{
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << "answer is " << ans << endl;

    return 0;
}

//   ----- is odd or even -----

// 1 -> even
// 0 -> odd
bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}

//  ------ nCr count ------

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);

    int denom = factorial(r) * factorial(n - r);

    return num / denom;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "answer is " << nCr(n, r) << endl;
}


//  ---- Find total number of set bits (1s)  -----

int countSetBits(int n)
{

    int count = 0;
    while (n > 0)
    {
        count = count + (n & 1);
        n = n >> 1;
    }

    return count;
}

int main()
{
    int a, b;

    cout << "enter the number a  : ";
    cin >> a;

    cout << "enter the number b : ";
    cin >> b;

    int result = countSetBits(a) + countSetBits(b);
    cout << result << endl;

    return 0;
}


//  ----- counting program -----

// function signature
void printCounting(int n)
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    // function call
    printCounting(n);

    return 0;
}

//   ----- prime number -------

// prime -> 1
// not a prime -> 0
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1 ;
}

int main()
{
    int n;
    cout << "enter a no. " ;
    cin >> n;

    if (isPrime(n))
    {
        cout << "is a prime number" << endl;
    }
    else
    {
        cout << "is not a prime number" << endl;
    }

    return 0;
}
