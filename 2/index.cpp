#include <iostream>
using namespace std;

int main()
{
    // int n = 22;
    // if (n >= 0)
    // {
    //     cout << "n is positive\n";
    // }
    // else
    // {
    //     cout << "n is negative\n";
    // }

    // int n1;
    // cout << "Enter the number to check even OR odd: ";
    // cin >> n1;

    // if (n1 % 2 == 1)
    // {
    //     cout << "number is odd \n";
    // }
    // else
    // {
    //     cout << "number is even \n";
    // }

    // int percent;
    // cout << "Enter marks to check grade: ";
    // cin >> percent;

    // if (percent >= 90)
    // {
    //     cout << "Grade A\n";
    // }
    // else if (percent >= 80 && percent < 90)
    // {
    //     cout << "Grade B\n";
    // }
    // else
    // {
    //     cout << "Grade C\n";
    // }

    // char ch;
    // cout << "Enter the character to check if it is upper or lower: ";
    // cin >> ch;
    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "CH is small\n";
    // }
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout << "CH is upper\n";
    // }
    // else
    // {
    //     cout << "Please enter a valid character\n";
    // }

    // char chN;
    // cout << "Enter character to check uppercase or lowercase: ";
    // cin >> chN;
    // if (chN >= 65 && chN <= 90)
    // {
    //     cout << "Uppercase \n";
    // }
    // else if (chN >= 97 && chN <= 122)
    // {
    //     cout << "Lowercase\n";
    // }
    // else
    // {
    //     cout << "invalid input :( \n";
    // }

    // // ternary
    // int n = 23;
    // cout << (n >= 0 ? "positive\n" : "negative\n");

    // infinite loop
    // int i = 1;
    // while (i <= 50){
    //     cout << i << " ";
    // }

    // sum to n with for
    // int n = 5;
    // int i = 1;
    // int sum = 0;

    // for (i; i <= n; i++)
    // {
    //     sum += i;
    //     cout << sum << " ";
    // }
    // cout << endl << sum << endl;

    // // sum to n with while
    // int nW = 5;
    // int sumW = 0;
    // int iW = 1;

    // while (iW <= n)
    // {
    //     sumW += iW;
    //     iW++;
    //     cout << sumW << " ";
    // }
    // cout << endl << sumW << endl;

    // sum of odd number;
    // int sumOfOdd = 0;
    // for (int i = 1; i <= 7; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sumOfOdd += i;
    //         cout << i << " ";
    //     }
    // }
    // cout << endl
    //      << sumOfOdd << endl;

    // // sum of even numbers
    // int sumOfEven = 0;
    // for (int i = 1; i <= 7; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sumOfEven += i;
    //         cout << i << " ";
    //     }
    // }
    // cout << endl
    //      << sumOfEven << endl;

    // while loop sum of odd

    // int sumOfOddW = 0;
    // int n = 9;
    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sumOfOddW += i;
    //         cout << i << " ";
    //     }
    //     i++;
    // }
    // cout << endl
    //      << sumOfOddW << endl;

    // while(3>5){
    //     cout << "Hello World\n";
    // }

    // condition will check in the end and the work will be done in the beginning
    // do
    // {
    //     cout << "Okasha\n";
    // } while (10 < 0);

    // cheking n is prime or not 1st method:
    // int n = 10;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0) // non prime number
    //     {
    //         cout << n << " is non-prime number\n";
    //         break;
    //     }
    //     else
    //     {
    //         cout << n << " is prime number\n";
    //         break;
    //     }
    // }

    // // i * i <= n

    // // cheking n is prime or not 2nd method:
    // int n = 7;
    // bool isPrime = true;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     { // non prime
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (!isPrime)
    // {
    //     cout << n << " is non-prime number\n";
    // }
    // else
    // {
    //     cout << n << " is prime number\n";
    // }

    // nested loops
    //
    // int n = 5; // lines
    // int x = 10; // numbers of stars printing
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= x; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n = 9;
    // int sumOfDiBy3 = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sumOfDiBy3 += i;
    //         cout << i << endl;
    //     }
    // }
    // cout << "Sum of 1 to " << n << " which are divisible by 3 is equal to " << sumOfDiBy3 << endl;


    // factorial of n
    int n = 7;
    int m = 1;
    for (int i = 1; i <= n; i++)
    {
        m *= i;
    }
    cout << m << endl;

    return 0;
}