//
//  main.cpp
//  Lab2Q8
//
//  Created by Bernard Steemers on 17/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int arr [12] = {1,2,3,4,5,6,7,8,9,10,};
    int i = 0, num, pos, count = 10;
    
    cout << "Gimme a number...\n";
    cin >> num;
    cout << "Gimme a position...\n";
    cin >> pos;
    
    while(count < 12)
    {
        
        
        while(count - i > pos - 1)
        {
            arr[count-i] = arr[count-i - 1];
            i = i + 1;
        }
        arr[pos-1] = num;
        count ++;
    }
    
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << arr[i] << ", ";
    }
}
