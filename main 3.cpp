//
//  main.cpp
//  Lab1Q4
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x >>y;
    z=x, x=y, y=z;
    cout << x<<' '<<y;
    return 0;
}
