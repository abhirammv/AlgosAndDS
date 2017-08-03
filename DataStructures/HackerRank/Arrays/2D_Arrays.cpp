#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }

    int max = -1000;
    int sum = 0;

    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            sum = arr[row][col] + arr[row][col+1] + arr[row][col+2]
                  + arr[row+1][col+1]
                  + arr[row+2][col]+arr[row+2][col+1]+arr[row+2][col+2];

            if(sum > max)
                max = sum;
        }
    }

    cout<<max<<endl;
    return 0;
}

