//  main.cpp
//  Lab2Q5
//  Created by Bernard Steemers on 12/10/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {32,12,45,67,78,65,9,31};
    int min = arr[0];
    int smin = arr[0];
    for(int i =0 ; i < sizeof(arr)/sizeof(i); i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    for(int j = 0; j < sizeof(arr)/sizeof(j); j++)
    {
        if(arr[j] < smin && arr[j]!= min)
        {
            smin = arr[j];
        }
    }
    
   
    cout << smin<<"\n" << "\n";
}
