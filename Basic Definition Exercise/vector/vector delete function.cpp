// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<vector>
#include<array>

using namespace std;




int main()
{  
    /*pop_back:删除 vector 容器中最后一个元素，该容器的大小（size）会减 1，但容量（capacity）不会发生改变。*/
    /*
    vector<int>demo{1,2,3,4,5};
    demo.pop_back();
    //输出 dmeo 容器新的size
    cout << "size is :" << demo.size() << endl;
    //输出 demo 容器新的容量
    cout << "capacity is :" << demo.capacity() << endl;
    for (int i = 0; i < demo.size(); i++) {
        cout << demo[i] << " ";
    }
    */
    
    /* erase:删除 vector 容器中指定位置处的元素*/
    /*
    vector<int>demo{ 1,2,3,4,5 };
    auto iter = demo.erase(demo.begin() + 1);//删除元素 2
    //输出 dmeo 容器新的size
    cout << "size is :" << demo.size() << endl;
    //输出 demo 容器新的容量
    cout << "capacity is :" << demo.capacity() << endl;
    for (int i = 0; i < demo.size(); i++) {
        cout << demo[i] << " ";
    }
    //iter迭代器指向元素 3
    cout << endl << *iter << endl;

    */
    
    
    /*remove:删除容器中和指定元素值相同的所有元素*/
    /*
    vector<int>demo{ 1,3,3,4,3,5 };
    //交换要删除元素和最后一个元素的位置
    auto iter = std::remove(demo.begin(), demo.end(), 3);
    demo.erase(iter, demo.end());//使用 erase() 成员函数删掉这些 "无用" 的元素。
    cout << "size is :" << demo.size() << endl;
    cout << "capacity is :" << demo.capacity() << endl;
    //输出剩余的元素
    for (int i = 0; i < demo.size(); i++) {
        cout << demo[i] << " ";
    }
    */
    
    /*clear:想删除容器中所有的元素*/
    vector<int>demo{ 1,3,3,4,3,5 };
    //交换要删除元素和最后一个元素的位置
    demo.clear();
    cout << "size is :" << demo.size() << endl;
    cout << "capacity is :" << demo.capacity() << endl;
    
    return 0;



    
}


