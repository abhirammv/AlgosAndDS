//
// Created by Abhiram MV on 7/26/17.
//
#include <iostream>

using namespace std;

//Return 1 if 0 is input to the function
int factorial(int n) {
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}


int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}


