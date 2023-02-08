// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <list>

using namespace std;

bool demo(double first, double second)
{
    return (int(first) == int(second));
}


int main()
{   
    
    

    /*pop_front()、pop_back() 和 clear()應用 */
    /*
    * list<int>values{ 1,2,3,4 };
    //删除当前容器中首个元素
    values.pop_front();//{2,3,4}

    //删除当前容器最后一个元素
    values.pop_back();//{2,3}

    //清空容器，删除容器中所有的元素
    values.clear(); //{}

    for (auto begin = values.begin(); begin != values.end(); ++begin)
    {
        cout << *begin << " ";
    }
    */

    /*erase:删除 list 容器中 position 迭代器所指位置处的元素*/
    /*
    list<int>values{ 1,2,3,4,5 };
    //指定删除区域的左边界
    auto first = values.begin();
    ++first;//指向元素 2
    //指向删除区域的右边界
    auto last = values.end();
    --last;//指向元素 5
    //删除 2、3 和 4
    values.erase(first, last);
    for (auto begin = values.begin(); begin != values.end(); ++begin)
    {
        cout << *begin << " ";
    }
    */

    /*remove:根据元素的值来执行删除操作*/
    /*
    list<char>values{ 'a','b','c','d' };
    values.remove('c');
    for (auto begin = values.begin(); begin != values.end(); ++begin)
    {
        cout << *begin << " ";
    }
    */

    /*unique:去除 list 容器中相邻重复的元素*/
    list<double> mylist{ 1,1.2,1.2,3,4,4.5,4.6 };
    //删除相邻重复的元素，仅保留一份
    mylist.unique();//{1, 1.2, 3, 4, 4.5, 4.6}
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << *it << ' ';
    cout << endl;
    //demo 为二元谓词函数，是我们自定义的去重规则
    mylist.unique(demo);
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << *it << ' ';
    return 0;
    
}


