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
    int x, num, remainding, reverse = 0;
    cout << "Enter a positive number: ";
    cin >> num;
    x = num;
    
    while (num != 0)
    {
        remainding = num % 10;
        reverse = (reverse * 10) + remainding;
        num = num / 10;
    }
    
    if (x == reverse)
        cout << " The number is a palindrome.\n";
    else
        cout << " The number is not a palindrome.\n";
    return 0;
}
