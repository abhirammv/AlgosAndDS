//
// Created by Abhiram MV on 7/24/17.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T = 0;
    int len = 0;
    cin>>T;

    string* str = new string[T];

   for(int i = 0; i < T; i++)
    {
        cin>>str[i];
    }

    for(int j = 0; j < T; j++)
    {
        for(len = 0; len < str[j].length(); len++)
        {
            if(len%2 == 0)
                cout<<str[j][len];
        }

        cout<<" ";

        for(len = 0; len<str[j].length(); len++)
        {
            if(len%2!=0)
                cout<<str[j][len];
        }

        cout<<endl;

    }

    return 0;
}