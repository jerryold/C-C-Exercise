#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    /*erase*/
    //創建並初始化容器
    //创建并初始化 set 容器
    std::set<int>myset{ 1,2,3,4,5 };
    cout << "myset size = " << myset.size() << endl;

    //1) 调用第一种格式的 erase() 方法
    int num = myset.erase(2); //删除元素 2，myset={1,3,4,5}
    cout << "1、myset size = " << myset.size() << endl;
    cout << "num = " << num << endl;
    //2) 调用第二种格式的 erase() 方法
    set<int>::iterator iter = myset.erase(myset.begin()); //删除元素 1，myset={3,4,5}
    cout << "2、myset size = " << myset.size() << endl;
    cout << "iter->" << *iter << endl;
    //3) 调用第三种格式的 erase() 方法
    set<int>::iterator iter2 = myset.erase(myset.begin(), --myset.end());//删除元素 3,4，myset={5}
    cout << "3、myset size = " << myset.size() << endl;
    cout << "iter2->" << *iter2 << endl;

    cout << " " << endl;
    /*clear*/
    std::set<int>myset2{ 1,2,3,4,5 };
    cout << "1、myset2 size = " << myset2.size() << endl;
    //清空 myset 容器
    myset2.clear();
    cout << "2、myset2 size = " << myset2.size() << endl;
    

    return 0;
}


