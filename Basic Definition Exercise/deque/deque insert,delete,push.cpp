// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <deque>
#include <array>

using namespace std;




int main()
{   
    /*insert,delete,push function*/
    deque<int>d;
    //调用push_back()向容器尾部添加数据。
    d.push_back(2); //{2}
    //调用pop_back()移除容器尾部的一个数据。
    d.pop_back(); //{}
    //调用push_front()向容器头部添加数据。
    d.push_front(2);//{2}
    //调用pop_front()移除容器头部的一个数据。
    d.pop_front();//{}
    //调用 emplace 系列函数，向容器中直接生成数据。
    d.emplace_back(2); //{2}
    d.emplace_front(3); //{3,2}
    //emplace() 需要 2 个参数，第一个为指定插入位置的迭代器，第二个是插入的值。
    d.emplace(d.begin() + 1, 4);//{3,4,2}
    for (auto i : d) {
        cout << i << " ";
    }
    //erase()可以接受一个迭代器表示要删除元素所在位置
    //也可以接受 2 个迭代器，表示要删除元素所在的区域。
    d.erase(d.begin());//{4,2}
    d.erase(d.begin(), d.end());//{}，等同于 d.clear()
    
    

    /*insert介紹*/
   
    /*
    deque<int> d{ 1,2 };
    //第一种格式用法
    d.insert(d.begin() + 1, 3);//{1,3,2}
    //第二种格式用法
    d.insert(d.end(), 2, 5);//{1,3,2,5,5}
    //第三种格式用法
    array<int, 3>test{ 7,8,9 };
    d.insert(d.end(), test.begin(), test.end());//{1,3,2,5,5,7,8,9}
    //第四种格式用法
    d.insert(d.end(), { 10,11 });//{1,3,2,5,5,7,8,9,10,11}
    for (int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    */
    
    return 0;
}


