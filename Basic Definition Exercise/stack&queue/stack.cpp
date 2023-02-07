#include <iostream>
#include <stack>
#include <list>
using namespace std;
int main()
{
    //構建stack容器適配器
    list<int>value{1, 2, 3};
    stack<int, list<int>>my_stack(value);
    cout << "size of my stack:" << my_stack.size() << endl;

    while(!my_stack.empty())
    {
        cout << my_stack.top() << endl;
        my_stack.pop();
    }
    return 0;

    
   
    
}


