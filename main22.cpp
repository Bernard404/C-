//  main.cpp
//  Lab2Q2
//  Created by Bernard Steemers on 10/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.

#include <iostream>
using namespace std;
int main()
{
    int numbers [] = {4,-5,6,-73,4,5,-47,2,1,19,0};
    for(int i = 0; i < sizeof(numbers) / sizeof(i) ; i++)
    {
        if(numbers[i] < 0)
        cout << numbers[i] << "\n";
    }
    return 0;
}
