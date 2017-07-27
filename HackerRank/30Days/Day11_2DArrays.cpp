//
// Created by Abhiram MV on 7/27/17.
//
#include <iostream>
#include <vector>

int main()
{
    vector< vector<int> >arr(6,vector<int>(6));
    int max = - 1000; //Representing -inf. Helpful to set to a large negative number, in the case of summation on negative numbers
    int sum = 0;

    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }

    for(int row = 0; row < 4; row++)
    {
        sum = 0;
        for(int col = 0; col < 4; col++)
        {
            sum = arr[row][col] + arr[row][col+1] + arr[row][col+2] + arr[row + 1][col + 1] + arr[row + 2][col] + arr[row+2][col+1] + arr[row+2][col+2];
            if(max < sum)
                max = sum;
        }
    }

    cout << max;

    return 0;
}
