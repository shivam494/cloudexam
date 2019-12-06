/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Red Hat, Inc. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a,b,n;
    while(1)
    {
    cout << "please enter 2 numbers" << endl;
    cin>>a>>b;
    cout<<"enter 1 to add the numbers\n enter 2 to subtract the number \n enter 3 to multiply the numbers \n enter 4 to divide the numbers"<<endl;
    cin>>n;
    switch(n)
    {
        case 1: cout<<"the addition of 2 numbers is"<<a+b<<endl;
                break;
        case 2:cout<<"the subtraction of 2 numbers is"<<a-b<<endl;
                break;
        case 3:cout<<"the multiplication of 2 numbers is"<<a*b<<endl;
               break;
        case 4:cout<<"the division  of first/second  is"<<a/b<<endl;
                break;
        case 5:
            return 0;
        break;
    }
    }
    return 0;
}
