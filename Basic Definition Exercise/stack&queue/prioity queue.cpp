#include <iostream>
#include <queue>
#include <array>
#include <functional>
using namespace std;
int main()
{
    //创建一个空的priority_queue容器适配器
    priority_queue<int>values;
    //使用 push() 成员函数向适配器中添加元素
    values.push(3);//{3}
    values.push(1);//{3,1}
    values.push(4);//{4,1,3}
    values.push(2);//{4,2,3,1}
    //遍歷整個容器
    while (!values.empty())
    {

        //输出第一個元素並移除。
        std::cout << values.top() << " ";
        values.pop();//移除隊頭元素的同時,將剩餘元素元素優先及最大的移至隊頭
    }
    return 0;
}


