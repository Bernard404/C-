//  main.cpp
//  Lab1Q10
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.

#include <iostream>
using namespace std;

int main()
{
    int x, remainding,reverse = 0;
    
    cout << "Enter an number: ";
    cin >> x;
    
    while(x != 0)
    {
        remainding = x % 10;
        reverse = reverse * 10 + remainding;
        x /= 10;
    }
    cout << "Reversed Number = " << reverse;
    
    return 0;
}
