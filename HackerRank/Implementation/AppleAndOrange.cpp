#include <iostream>
#include <vector>

using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
        cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
        cin >> orange[orange_i];
    }

    int apples = 0, oranges = 0;
    for(int i = 0; i<m; i++)
    {
        if((apple[i]+a >= s) && (apple[i]+a <= t))
            apples++;

    }

    for(int j = 0; j<n; j++)
    {
        if((orange[j]+b<=t) && (orange[j] + b >=s))
            oranges++;
    }

    cout<<apples<<endl;
    cout<<oranges<<endl;
    return 0;
}

