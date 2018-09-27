//
//  main.cpp
//  Lab1Q13
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;
    
    cout << "Enter a positive number: ";
    cin >> num;
    
    n = num;
    
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);
    
    cout << " The reverse of the number is: " << rev << endl;
    
    if (n == rev)
        cout << " The number is a palindrome.";
    else
        cout << " The number is not a palindrome.";
    
    return 0;
    
}
