//  main.cpp
//  Lab1Q14
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "This is a prime number";
    else
        cout << "This is not a prime number";
    
    return 0;
}
