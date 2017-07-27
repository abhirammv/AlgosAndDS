//
// Created by Abhiram MV on 7/27/17.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    int max = 0, count = 0;
    cin>>n;

    while(n!=0)
    {
        if((n%2)== 1)
            count++;
        else
            count = 0;
        if(count>max)
            max = count;

        n =  n/2;
    }

    cout<<max;

    return 0;
}
