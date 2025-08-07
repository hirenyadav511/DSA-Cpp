#include <iostream>
#include <math.h>
using namespace std;

// int main(){
//     int a, b = 1;
//     a= 10;

//     if (++a)
//     {
//         cout << b;
//     }
//     else
//     {
//         cout << ++b;
//     }

// }

// int main() {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             cout << i << " "<< j <<endl;
//         }

//     }

// }

// ---- decimal to binary conversion -----

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int place = 1;

//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * place) + ans;

//         place *= 10;
//         n = n >> 1;
//     }
//     cout << "answer is : " << ans << endl;
// }

// ---- binary to decimal conversion -----

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int i = 0;

//     while (n != 0)
//     {
//         int digit = n % 10;

//         if (digit == 1)
//         {
//             ans = ans + pow(2, i);
//         }
//         n = n/10;
//         i++;
//     }
//     cout << ans << endl;
// }

// ------ Reverse Number  -------

// int main()
// {
//     // int reverse(int n);
//     int n;
//     cin >> n;

//     int ans = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;

//         // if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
//         // {
//         //     return 0;
//         // }

//         ans = digit + (ans * 10);

//         n = n / 10;
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int m = n;
//     int mask = 0;
//     int ans = 0;

//     while (m != 0)
//     {
//         mask = (mask << 1) | 1;
//         m = mask >> 1;
//     }

//     ans = (~n) & mask;

//     cout << ans << endl;
// }

//  ------ pow(a, b)  ------

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int ans = 1;

//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     cout << "ans is " << ans << endl;
// }


// ---- Fibonacci Series Count ----

// int main()
// {
//     int n;
//     cout << "enter the number : ";
//     cin >> n;

//     int a = 0;
//     int b = 1;

//     if (n == 0)
//     {
//         cout << a << " ";
//     }
//     else if (n == 1)
//     {
//         cout << b << " ";
//     }
//     else
//     {
//         int ans;
//         for (int i = 2; i <= n; i++)
//         {
//             ans = a + b;
//             a = b;
//             b = ans;
//         }

//         cout << b << endl;

//         return 0;
//     }
// }