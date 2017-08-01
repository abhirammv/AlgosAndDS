//
// Created by Abhiram MV on 8/1/17.
//

#include <iostream>
using namespace std;


int main(){
    string S;
    cin >> S;
    int n = 0;
    try
    {
        n = stoi(S);
        cout<<n<<endl;
    }

    catch(...)
    {
        cout<<"Bad String"<<endl;
    }

    return 0;
}

