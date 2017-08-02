#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int day_a, month_a, year_a;
    int day_e, month_e, year_e;

    cin>>day_a>>month_a>>year_a;

    cin>>day_e>>month_e>>year_e;

    if(year_a < year_e)
        cout<<0<<endl;

    else if(year_a > year_e)
        cout<<10000<<endl;

    if((year_a == year_e) && (month_a == month_e))
    {
        if(day_a <= day_e)
            cout<<0<<endl;
        else
            cout<<((day_a - day_e)*15)<<endl;
    }

    else if(year_a == year_e)
    {
        if(month_a < month_e)
            cout<<0<<endl;
        else
            cout<<((month_a - month_e)*500)<<endl;
    }

    return 0;

}

