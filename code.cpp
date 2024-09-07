#include <iostream>
using namespace std;

int main()
{
    // cout << "Hi there,\n how are you?\n";

    // primitive data types
    // int age = 25; // 4 bytes 0/1
    // char name = 'Okasha'; // 1 bytes ASCII 0/1
    // float PI = 3.14f; // 4 bytes 0/1
    // bool isPaid = true; // 1 byte 0/1
    // double var = 23.99; // 8 bytes 0/1

    // cout << sizeof(age) << endl;
    // cout << sizeof("svb0msg56432") << endl;
    // cout << true << endl;
    // for (int i = 0; i < age; i++)
    // {
    //     cout << i << endl;
    //     if (i == 5)
    //     {
    //         break;
    //     }
    // }

    // char grade = 'A';
    // int valA = grade;

    // cout << valA << endl;

    // int m;
    // cout << "Enter your age: ";
    // cin >> m;
    // cout << "Your age is: " << m << endl;
    
    //       a b
    // cout << (5/3) << endl;
    // cout << (5*3) << endl;
    // cout << (5-3) << endl;
    // cout << (5+3) << endl;

    int n;
    cout << "Enter the number to check is it is positive or negative: ";
    cin >> n;
    if(n >= 0){
        cout << "The number is positive" << endl;
    }else{
        cout << "The number is negative" << endl;
    }

    return 0;
}