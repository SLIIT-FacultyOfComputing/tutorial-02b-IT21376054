/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;
int main()
{
    int no;
    long fac;

    cout << "Enter a Number : " ; 
    cin >> no;

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    cout << "Factorial is :" << no << fac <<endl ;  
    
    return 0;
}