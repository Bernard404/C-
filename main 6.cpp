//
//  main.cpp
//  Lab1Q7
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if(x > y && x > z)
    {
        cout<< x << " is largest number\n";
    }else if(y > x && y > z)
    {
        cout << y << " is greatest number\n";
    }else if(z > x && z > y)
    {
        cout << z << " is greatest number\n";
    }
    return 0;
}
