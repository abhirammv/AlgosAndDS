#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N = 0;
    cin>>N;
    vector<vector<int>> arr(N);
    //cout<<N<<endl;
    int index = 0;

    int lastAnswer = 0;
    int numQ = 0;
    cin>> numQ;

    int qf_1 = 0, x =0, y = 0;

    for(int i = 0; i < numQ; i++)
    {
        cin>>qf_1>>x>>y;
        if(qf_1 == 1)
        {
            index = ((x ^ lastAnswer)%N);
            arr[index].push_back(y);
        }

        else if(qf_1 == 2)
        {
            index = ((x ^ lastAnswer)%N);
            lastAnswer = arr[index][y%arr[index].size()];
            cout<<lastAnswer<<endl;

        }
    }

    return 0;
}

