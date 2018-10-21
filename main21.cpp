//
//  main.cpp
//  Lab2Q1
//
//  Created by Bernard Steemers on 05/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int numbers [] = {4,5,6,73,4,5,47,2,1,19};
    for(int i = 0; i < sizeof(numbers) / sizeof(i) ; i++)
    {
        cout << numbers[i] << "\n";
    }
    
    return 0;
}
