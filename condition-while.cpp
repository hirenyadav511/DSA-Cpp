#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "enter the value of n : ";
    cin >> ch;

    if (isupper(ch))
    {
        cout << ch << " is a uppercase" << endl;
    }
    else if (islower(ch))
    {
        cout << ch << " is a lowercase" << endl;
    }
    else if (isdigit(ch))
    {
        cout << ch << " is a numeric" << endl;
    }
    else
    {
        cout << ch << "is a special character" << endl;
    }
}


// int main()
// {

// int n;

// cout<< "enter the value of n : " <<endl;
// cin >> n;

// if (n > 0)
// {
//     cout << "positive" << endl;
// }
// else if (n < 0)
// {
//     cout << "negative" << endl;
// }
// else
// {
//     cout << "zero" << endl;
// }

//     int a, b;

//     cout << "enter the value of a :" << endl;
//     cin >> a;

//     cout << "enter the value of b " << endl;
//     cin >> b;

//     if (a > b)
//     {
//         cout << "a is greater" << endl;
//     }
//     else if (a < b)
//     {
//         cout << "b is greater" << endl;
//     }
//     else
//     {
//         cout << "both are equal" << endl;
//     }
// }


//  -------------- WHILE LOOP ------------------


// int main()
// {
//     int n;
//     cout << "enter the value of n : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         cout << i << endl;
//         i++;
//     }
// }

// Output : 1 2 3 4 5

//  ----- sum of Number  -----

// int main()
// {
//     int n;

//     cout << "enter the value of n : ";
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     while (i <= n)
//     {
//         sum = sum + i;
//         i = i + 1;
//     }

//     cout << "value of sum is : " << sum << endl;
// }

// Output : value = 10 , ans = 55

//  ----- Fahrenheit to Celsius -----

// int main()
// {
//     float fahrenheit, celsius;

//     cout << "Enter temperature in Fahrenheit : ";
//     cin >> fahrenheit;

//     celsius = (fahrenheit - 32) * 5.0 / 9.0;

//     cout << "Temperature in celsius : " << celsius << char(248) << "C" << endl;
// }

// -----  prime or not -----

// int main()
// {
//     int num, i = 2;

//     cout << "enter the number : ";
//     cin >> num;

//     if (num <= 1)
//     {
//         cout << "not a prime number" << endl;
//         return 0;
//     }

//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             cout << "not a prime number" << endl;
//             return 0;
//         }
//         i++;
//     }
//     cout << "prime number" << endl;
//     return 0;
// }
