//  main.cpp
//  Lab2Q4
//  Created by Bernard Steemers on 10/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.

#include <iostream>
using namespace std;


int main()
{
    int arr[] = {32,43,45,67,78,65,9,32,12};
    int min, max;
    min = arr[0], max = arr[0];
    for(int i = 0; i < sizeof(arr)/sizeof(i); i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << min<<"\n"<< max << "\n";
}
