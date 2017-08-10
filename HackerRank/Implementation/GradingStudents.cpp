#include <iostream>
#include <vector>

using namespace std;

vector < int > solve(vector <int> grades){
    // Complete this function
    for(int i = 0; i < grades.size(); i++)
    {
        if(grades[i]>=38)
        {
            for(int j = 1; j < 3; j++)
            {
                if((grades[i]+j)%5 == 0)
                    grades[i] = grades[i]+j;
            }
        }

    }

    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
        cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

