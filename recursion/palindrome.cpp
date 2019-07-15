/*
 * palindrome.cpp
 *
 *  Created on: 10-Jul-2019
 *      Author: chandan
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool palandrome(string str)
{
    int length = str.length();
    if(length <= 1)
    {
        return true;
    }
    else
    {
        return str[0] == str[length-1] && palandrome(str.substr(1,length-2));
    }
}
int mainrr()
{
    string str, cut;
    cin>>str;
    cut = str.substr(1,str.length()-2);
    cout<<cut<<endl;
    if(palandrome(str))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}



