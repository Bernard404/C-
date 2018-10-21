//
//  main.cpp
//  Lab2Q3
//
//  Created by Bernard Steemers on 10/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;


static void find(int x)
{
    int a = x;
    bool found = false;
    int nums [] = {5,4,6,3,7,2,8,1,9};
    for(int i = 0; i < sizeof(nums)/sizeof(i) && found == false;i++)
    {
        if(a == nums[i])
        {
            cout << "Found at Position " << i << "\n";
            found = true;
        }
        
    }
    if(found == false)
    {
        cout << -1 << "\n";
    }
    
}

int main()
{
    int x;
    cout << "Gimme a number to find between 0-9 \n";
    cin >>  x;
    find(x);
}
