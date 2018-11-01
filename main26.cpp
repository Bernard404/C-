//
//  main.cpp
//  Lab2Q6
//
//  Created by Bernard Steemers on 12/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int even, odd;
    int arr [] = {50,53,34,26,87,35,98,19};
    
    for(int i = 0; i < sizeof(arr)/sizeof(i); i++)
    {
        if(arr[i] % 2 == 0 )
        {
            even++;
        }
        else
            odd++;
    }
    cout << even << "\n" << odd;
}
