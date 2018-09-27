//
//  main.cpp
//  Lab1Q8
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if(year%4==0 && !year%100==0)
    {
        cout << year << " is a Leap year\n";
    }
    else if(year%4==0 && year%100==0 && year%400==0)
    {
        cout << year << " is a Leap year\n";
    }
    else
        cout << year << " is Not a Leap year\n";
    return 0;
}
