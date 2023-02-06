// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <deque>

using namespace std;




int main()
{  
    deque<int> d{ 1,2,3,4,5 };
    cout << "deque 首元素为：" << d.front() << endl;
    cout << "deque 尾元素为：" << d.back() << endl;
    //修改首元素
    d.front() = 10;
    cout << "deque 新的首元素为：" << d.front() << endl;
    //修改尾元素
    d.back() = 20;
    cout << "deque 新的尾元素为：" << d.back() << endl;
    return 0;



    
}


