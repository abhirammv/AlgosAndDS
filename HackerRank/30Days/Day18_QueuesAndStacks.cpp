//
// Created by Abhiram MV on 8/1/17.
//

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    queue<int> queue1;
    stack <int> stack1;

    queue1.push(8);
    queue1.push(15);
    queue1.push(82);

    stack1.push(8);
    stack1.push(15);
    stack1.push(82);

    queue1.pop();
    queue1.pop();
    stack1.pop();
    stack1.pop();

    cout<<"Queue"<<endl;
    cout<<queue1.front()<<endl;

    cout<<"Stack"<<endl;
    cout<<stack1.top();


    return 0;
}
