#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(int);

int main() {

    int n = 0;
    cin>>n;
    int num;
    int i = 0;
    for(i = 0; i<n; i++)
    {
        cin>>num;
        if(prime(num))
        {
            cout<<"Prime"<<endl;
        }
        else
            cout<<"Not prime"<<endl;
    }

    return 0;
}


bool prime(int n)
{
    if(n == 1)
        return false;
    if(n == 2)
        return true;
    if(n%2 == 0)
        return false; //test of divisibility by 2 ensures us that we could skip the other even numbers

    bool primeflag = true;

    int root = sqrt(n);
    for(int j = 3; j<=root; j+=2)
    {
        if(n%j == 0)
        {
            primeflag = false;
            break;
        }
    }

    return primeflag;

}