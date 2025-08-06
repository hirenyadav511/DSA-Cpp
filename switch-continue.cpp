#include <iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     int n = 1;

//     switch (n) ////takes only integer and character value not take float and string value
//     {
//     case 1:
//         cout << "first" << endl;
//         cout << "again first" << endl;
//         break;

//     case 2:
//         cout << "second" << endl;
//         break;

//     case 3:
//         cout << "third" << endl;
//         break;

//     default:
//         cout << "not valid" << endl;
//         break;
//     }
// }

// int main()
// {
//     int n = 1;
//     char ch = 'A';

//     switch (ch)
//     {
//     case 1:
//         cout << "this is first" << endl;
//         break;

//     case 2:
//         cout << "this is second" << endl;
//         break;

//     case 'A':
//         switch (n)
//         {
//         case 1:
//             cout << "this is inside " << n << endl;
//             break;
//         }
//         break;

//     default:
//         cout << "this is default case" << endl;
//     }
// }

//  ----- use exit() -----

// int main()
// {
//     int n = 1;
//     while (1)
//     {
//         switch (n)
//         {
//         case 1:
//             cout << "this is 1 " << endl;
//             break;
//         }
//         exit(0); // exit with 0 means success. exit with non-zero values mean failure.
//     }
// }

//  -----  use continue -----

// if you want to use continue inside swith case ensure the switch is inside loop.(if Switch inside loop then continue is valid.)

// int main()
// {
//     int n = 2;

//     switch (n)
//     {
//     case 1:
//         cout << "this is one" << endl;
//         break;

//     case 2:
//         cout << "this is two" << endl;
//         continue;                   // continue : is not valid in switch case;

//     default:
//         cout << "this is default" << endl;
//     }
// }

// ----- Mini Calculator -----

// int main()
// {

//     int a, b;

//     cout << "enter the value of a : ";
//     cin >> a;

//     cout << "enter the value of b : ";
//     cin >> b;

//     char op;
//     cout << "enter the operation you want to perform : ";
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//         cout << (a + b) << endl;
//         break;

//     case '-':
//         cout << (a - b) << endl;
//         break;

//     case '*':
//         cout << (a * b) << endl;
//         break;

//     case '/':
//         cout << (a / b) << endl;
//         break;

//     case '%':
//         cout << (a % b) << endl;
//         break;

//     default:
//         cout << "please enter the valid oparator" << endl;
//         break;
//     }
// }

// Example - notes calculate

// int main()
// {
//     int amount;

//     cout << "enter the amount : " << endl;
//     cin >> amount;

//     int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes1 = 0;

//     switch (1)
//     {
//     case 1:
//         notes100 = amount / 100;
//         amount = amount % 100;
//         cout << "100 rupees notes : " << notes100 << endl;

//     case 2:
//         notes50 = amount / 50;
//         amount = amount % 50;
//         cout << "50 rupees notes : " << notes50 << endl;

//     case 3:
//         notes20 = amount / 20;
//         amount = amount % 20;
//         cout << "20 rupees notes : " << notes20 << endl;

//     case 4:
//         notes10 = amount / 10;
//         amount = amount % 10;
//         cout << "10 rupees notes : " << notes10 << endl;

//     case 5:
//         notes1 = amount / 1;
//         amount = amount % 1;
//         cout << "1 rupees notes : " << notes1 << endl;
//         break;

//     default:
//         cout << "enter the valid amount" << endl;
//     }
// }