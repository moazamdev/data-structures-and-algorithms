//~ Sum of first n natural numbers

// #include<iostream>
// using namespace std;
// void sum(int n)
// {
//     cout << (n*(n+1))/2 << endl;
// }
// int main()
// {
//     cout << endl << endl;
//     int n; 
//     cin >> n;
//     sum(n);
//     cout << endl << endl;
//     return 0;
// }


//~ Check pythagorian triplet

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool pythagorian(int x, int y, int z)
// {
//     int a, b, c;
//     a = max(x, max(y, z));
//     if (a == x)
//     {
//         b = y;
//         c = z;
//     }
//     else if (a == y)
//     {
//         b = x;
//         c = z;
//     }
//     else if (a == z)
//     {
//         b = x;
//         c = y;
//     }

//     return (pow(a, 2) == (pow(b, 2) + pow(c, 2))) ? true : false;
// }
// int main()
// {
//     cout << endl << endl;
//     int x, y, z;
//     cin >> x >> y >>z;
//     if (pythagorian(x, y, z))
//     {
//         cout << "Pythagorian tiplet" << endl;
//     }
//     else
//     {
//         cout << "Not pythagorian tiplet" << endl;
//     }
//     pythagorian(x, y, z);
//     cout << endl << endl;
//     return 0;
// }



//~ Binary to Decimal

// #include<iostream>
// using namespace std;
// int binaryToDecimal(int n)
// {
//     int result = 0, x = 1, last_dig;
//     while (n > 0)
//     {
//         last_dig = n % 10;
//         result += last_dig * x;
//         x *= 2;
//         n /= 10;
//     }
//     return result;
// }
// int main()
// {
//     cout << endl << endl;
//     int n; 
//     cin >> n;
//     cout << binaryToDecimal(n) << endl;
//     cout << endl << endl;
//     return 0;
// }



//~ Octal to Decimal

// #include<iostream>
// using namespace std;
// int octalToDecimal(int n)
// {
//     int result = 0, x = 1, last_dig;
//     while (n > 0)
//     {
//         last_dig = n % 10;
//         result += last_dig * x;
//         x *= 8;
//         n /= 10;
//     }
//     return result;
// }
// int main()
// {
//     cout << endl << endl;
//     int n; 
//     cin >> n;
//     cout << octalToDecimal(n) << endl;
//     cout << endl << endl;
//     return 0;
// }



//~ Hexadecimal to Decimal

// #include<iostream>
// #include<string>
// using namespace std;
// int hexaToDecimal(string n)
// {
//     int result = 0, x = 1, size = n.size();
//     for (int i = size - 1; i >= 0; i--)
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//             result += x * (n[i] - '0');
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F')
//         {
//             result += x * (n[i] - 'A' + 10);
//         }
//         x *= 16;
//     }
//     return result;
// }
// int main()
// {
//     cout << endl << endl;
//     string n; 
//     cin >> n;
//     cout << hexaToDecimal(n) << endl;
//     cout << endl << endl;
//     return 0;
// }


//~ Decimal to Binary

// #include<iostream>
// #include<string>
// using namespace std;
// long long decimalToBinary(int n)
// {
//     int base = 1, rem;
//     long long bin = 0;
//     while (n > 0)
//     {
//         rem = n % 2;
//         bin += rem * base;
//         n /= 2;
//         base *= 10;
//     }
//     return bin;
// }
// int main()
// {
//     cout << endl << endl;
//     int n; 
//     cin >> n;
//     cout << decimalToBinary(n) << endl;
//     cout << endl << endl;
//     return 0;
// }


//~ Decimal to Octal

// #include<iostream>
// #include<string>
// using namespace std;
// long long decimalToOctal(int n)
// {
//     int base = 1, rem;
//     long long octal = 0;
//     while (n > 0)
//     {
//         rem = n % 8;
//         octal += rem * base;
//         n /= 8;
//         base *= 10;
//     }
//     return octal;
// }
// int main()
// {
//     cout << endl << endl;
//     int n; 
//     cin >> n;
//     cout << decimalToOctal(n) << endl;
//     cout << endl << endl;
//     return 0;
// }


//~ Decimal to Hexadecimal

// #include<iostream>
// #include<string>
// using namespace std;
// void decimalToHexa(int n)
// {
//     int rem = 0, index = 0;
//     string hexa = "";

//     while (n > 0)
//     {
//         rem = n % 16;
//         if (rem >= 0 && rem <= 9)
//         {
//             hexa[index] = rem + 48;
//             index++;
//         }
//         else if (rem >= 10 && rem <= 15)
//         {
//             hexa[index] = rem + 55;
//             index++;
//         }
//         n /= 16;
//     }
//     for (int i = index - 1; i >= 0; i--)
//     {
//         cout << hexa[i];
//     }
// }
// int main()
// {
//     cout << endl << endl;
//     int n; 
//     cin >> n;
//     decimalToHexa(n);
//     cout << endl << endl;
//     return 0;
// }