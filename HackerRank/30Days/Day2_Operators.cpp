//
// Created by Abhiram MV on 7/24/17.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float mealCost = 0.0;
    int tipPercent = 0, taxPercent = 0;

    cin>>mealCost;
    cin>>tipPercent;
    cin>>taxPercent;

    float tip = 0.0, tax = 0.0, totalCost = 0.0;

    tip = (mealCost/100)*tipPercent;
    tax = (mealCost/100)*taxPercent;

    totalCost = mealCost + tip + tax;
    cout<<"The total meal cost is "<<round(totalCost)<<" dollars."<<endl;


    return 0;
}