#include <iostream>
#include <queue>
#include <list>
using namespace std;
int main()
{
    //構建stack容器適配器
    deque<int>value{ 1,2,3 };
    queue<int>my_queue(value);
    cout << "size of my queue:" << my_queue.size() << endl;

    while(!my_queue.empty())
    {
        cout << my_queue.front() << endl;
        my_queue.pop();
    }
    return 0;

    
   
    
}


