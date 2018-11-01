//
//  main.cpp
//  Lab2Q7
//
//  Created by Bernard Steemers on 12/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int arrOne[] = {12,32,34,54,56,76,78,98,80,31,24,53,46,75,68,97,21,12,74,57};
    int arrTwo[20];
    for(int i = 0; i < sizeof(arrOne)/sizeof(i); i++)
    {
        arrTwo[i] = arrOne[i];
        cout << arrTwo[i] << "\n";
    }
    
}
