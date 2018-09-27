//
//  main.cpp
//  Lab1Q6
//
//  Created by Bernard Steemers on 26/09/2018.
//  Copyright © 2018 Bernard Steemers. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if(c == 'a'||c == 'A'|| c == 'e'||c == 'E'|| c == 'i'||c == 'I'||c == 'o'|| c == 'O'||c == 'u'||c =='U')
    {
        cout << "is a Vowel\n";
    }
    else
    {
        cout << "is a Consonant\n";
    }
    
    return 0;
}
