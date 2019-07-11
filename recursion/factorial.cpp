/*
 * factorial.cpp
 *
 *  Created on: 10-Jul-2019
 *      Author: chandan
 */
#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num == 0){
        return 1;
    }
    else{
        int result = num * factorial(num -1);
//        cout << result <<endl;
        return result;
    }
}
int main3()
{
    int num, result;
    cin>>num;
    result = factorial(num);
    cout << result <<endl;
    return 0;
}



