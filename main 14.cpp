//
//  main.cpp
//  Lab1Q15
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int toDecimal(long);
void toBinary(int a);
int main()
{
    long n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " in binary = " << toDecimal(n) << "in decimal\n\n";
    
    int num;
    cout << "Please enter a decimal: ";
    cin >> num;
    toBinary(num);
    
    
    return 0;
}

void toBinary(int a)
{
    int x = a,total = 0;
    
    while(x > 0)
    {
        total = x % 2;
        x /= 2;
        cout << total;
    }
    cout << "\n";
}

int toDecimal(long n)
{
    int decimalNum = 0,i = 0, remaining;
    while (n!=0)
    {
        remaining = n%10;
        n /= 10;
        decimalNum += remaining*pow(2,i);
        ++i;
    }
    return decimalNum;
}
