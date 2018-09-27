//
//  main.cpp
//  Lab1Q9
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    for(int i = 1; i < 5;i++)
    {
        for(int j = 1; j < 5;j++)
        {
            cout << j * i << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
