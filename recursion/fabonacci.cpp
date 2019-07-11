/*
 * fabonacci.cpp
 *
 *  Created on: 10-Jul-2019
 *      Author: chandan
 */
#include<iostream>
using namespace std;
int fabonacci(int num)
{
    if(num < 2){
        return num;
    }
    else{
        int result = fabonacci(num-1) + fabonacci(num-2);
//        cout<<result<<" ";
        return result;
    }
}
int main1()
{
    int num, result;
//    cin>>num;
    for(int i=0; i<13; i++)
    {
    result = fabonacci(i);
    cout << result <<endl;
    }
    return 0;
}



