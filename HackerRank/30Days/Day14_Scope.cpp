//
// Created by Abhiram MV on 7/27/17.
//
#include <iostream>
#include <string>

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;
    // Add your code here

    //Constructor
    Difference(vector<int> a): elements(a){}
    void computeDifference()
    {
        int size = elements.size();
        int min = elements[0]; int max = 0;

        for(int i = 0; i < size; i++)
        {

            if(elements[i] < min)
                min = elements[i];

            else if(elements[i] > max)
                max = elements[i];
        }

        maximumDifference = max - min;

    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
