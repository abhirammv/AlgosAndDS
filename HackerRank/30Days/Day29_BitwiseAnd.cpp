#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    int value = 0;
    int max = 0;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;

        max = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int A = i+1; A <= n; A++)
            {
                value = i&A;
                if(value < k && value > max)
                    max = value;

            }
        }


        cout<<max<<endl;
    }
    return 0;
}
