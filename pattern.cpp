#include <iostream>
using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << " * "  ;
//             j++;
//         }

//         cout << endl;
//         i++;
//     }
// }

// OUTPUT :

// 5
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *

// int main() {
//     int n;

//     cout << "Enter the value of n " ;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j<=n)
//         {
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// OUTPUT :

// Enter the value of n 3
// 111
// 222
// 333

// int main()
// {
//     int n;

//     cout << "enter a number : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// OUTPUT :

// enter a number : 3
// 123
// 123
// 123

// int main()
// {
//     int n;

//     cout << "enter a number : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << n - j + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// OUTPUT :

// enter a number : 4
// 4321
// 4321
// 4321
// 4321

// int main() {
//     int n;

//     cout<< "enter a number : ";
//     cin >> n;

//     int count = 1;
//     int i = 1;
//     while (i<=n)
//     {
//         int j = 1;
//         while (j<=n)
//         {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// OUTPUT :

// enter a number : 5
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << " * ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// OUTPUT :

// 5
//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *

// int main()
// {
//     int n;
//     cout << "enter a number : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a number : 5
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// int main()
// {
//     int n;
//     cout << "enter a number : ";
//     cin >> n;

//     int row = 1;
//     int count = 0;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             count++;
//             cout << count << " ";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// OUTPUT :

// enter a number : 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// int main()
// {
//     int n;
//     cout << "enter a number : ";
//     cin >> n;

//     int row = 1;
//     while (row <= n)
//     {
//         int count = row;
//         int col = 1;
//         while (col <= row)
//         {
//             cout << count << " ";
//             count++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// enter a number : 4
// 1
// 2 3
// 3 4 5
// 4 5 6 7

// int main()
// {
//     int n;

//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = i;
//         while (j >= 1)
//         {
//             cout << j << " ";
//             j--;
//         }
//         cout << endl;
//         i++;
//     }
// }

// OUTPUT :

// enter a value : 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// int main()
// {
//     int n;

//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << (i-j+1) << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 3
// A A A
// B B B
// C C C

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + j - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 3
// A B C
// A B C
// A B C

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     char ch = 'A';
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << ch << " ";
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 3
// A B C
// D E F
// G H I

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 0;
//     while (i < n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + i + j - 1 ;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// ------- OR ----------

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A' + i - 1;

//         while (j <= n)
//         {
//             cout << ch << " ";
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 3
// A B C
// B C D
// C D E

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;

//         while (j <= i)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 3
// A
// B B
// C C C

// int main () {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     char ch = 'A';
//     while (i<=n)
//     {
//         int j = 1;
//         while (j<=i)
//         {
//             cout << ch << " ";
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 4
// A
// B C
// D E F
// G H I J

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 0;
//         char ch = 'A' + i + j - 1;
//         while (j < i)
//         {
//             cout << ch << " ";
//             j++;
//             ch++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 4
// A
// B C
// C D E
// D E F G

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         char ch = 'A' + n - i;

//         while (j <= i)
//         {
//             cout << ch  << " ";
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 4
// D
// C D
// B C D
// A B C D

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i<=n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " " ;
//             space--;
//         }
//         int j = 1;
//         while (j<=i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 4
//    *
//   **
//  ***
// ****

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= (n-i+1))
//         {
//             cout << "*" << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 4
// * * * *
// * * *
// * *
// *

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int space = i - 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// enter a value : 4
// ****
//  ***
//   **
//    *

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <=n)
//     {
//         int space = i - 1;
//         while (space > 0)
//         {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << i ;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

// }

// enter a value : 4
// 1111
//  222
//   33
//    4

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <=n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i  ;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

// }

// enter a value : 4
//    1
//   22
//  333
// 4444

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     int count = 1;
//     while (i <=n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << count;
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

// }

// enter a value : 4
//    1
//   23
//  456
// 78910

// int main()
// {
//     int n;

//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         // print space (1st triangle)
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }

//         // 2nd triangle
//         int j = 1;
//         while (j <= i)
//         {
//             cout << j;
//             j++;
//         }

//         // 3rd triangle
//         int start = i - 1;
//         while (start)
//         {
//             cout << start;
//             start--;
//         }

//         cout << endl;
//         i++;
//     }
// }

// enter a value : 4
//    1
//   121
//  12321
// 1234321

// int main()
// {
//     int n;
//     cout << "enter a value : ";
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         // 1st triangle
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << j;
//             j++;
//         }

//         // 2nd triangle
//         int k = 0;
//         while (k <= i - 2)
//         {
//             cout << "*";
//             k++;
//         }

//         // 3rd triangle
//         int x = 0;

//         while (x <= i - 2)
//         {
//             cout << "*";
//             x++;
//         }

//         // 4th triangle

//         int z = n - i + 1;
//         while (z >= 1)
//         {
//             cout << z;
//             z--;
//         }

//         cout << endl;
//         i++;
//     }
// }

// enter a value : 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
