#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << sum << endl;
// }

// fibonacci series

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int a = 0;
//     int b = 1;
//     cout << a << " " << b << " ";

//     for (int i = 0; i < n; i++)
//     {
//         int sum = a + b;
//         cout << sum << " ";

//         a = b;
//         b = sum;
//     }
// }

// enter a value : 10
// 0 1 1 2 3 5 8 13 21 34 55 89

// prime number

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     bool isPrime = 1;

//     if (n <= 1)
//     {
//         isPrime = 0;
//     }

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime == 0)
//     {
//         cout << " is not a prime number";
//     }
//     else
//     {
//         cout << " is a prime number";
//     }
// }