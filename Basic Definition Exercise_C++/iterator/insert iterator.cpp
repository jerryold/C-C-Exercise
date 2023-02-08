#include <iostream>
#include <iterator>
#include <vector>
#include <forward_list>
#include<list>
using namespace std;
int main() {
    /*back_insert_iterator */
    //创建一个 vector 容器
    std::vector<int> foo;
    //创建一个可向 foo 容器尾部添加新元素的迭代器
    std::back_insert_iterator< std::vector<int> > back_it(foo);
    //将 5 插入到 foo 的末尾
    back_it = 5;
    //将 4 插入到当前 foo 的末尾
    back_it = 4;
    //将 3 插入到当前 foo 的末尾
    back_it = 3;
    //将 6 插入到当前 foo 的末尾
    back_it = 6;
    //输出 foo 容器中的元素
    for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
        std::cout << *it << ' ';

    cout << "\n---------------------------" << endl;

    /*front_insert_iterator*/
    //创建一个 forward_list 容器
    std::forward_list<int> foo1;
    //创建一个前插入迭代器
    //std::front_insert_iterator< std::forward_list<int> > front_it(foo);
    std::front_insert_iterator< std::forward_list<int> > front_it = front_inserter(foo1);
    //向 foo 容器的头部插入元素
    front_it = 5;
    front_it = 4;
    front_it = 3;
    front_it = 6;
    for (std::forward_list<int>::iterator it1 = foo1.begin(); it1 != foo1.end(); ++it1)
        std::cout << *it1 << ' ';
    cout << "\n---------------------------" << endl;
   
    //初始化为 {5,5}
    std::list<int> foo2(2, 5);
    //定义一个基础迭代器，用于指定要插入新元素的位置
    std::list<int>::iterator it2 = ++foo2.begin();
    //创建一个 insert_iterator 迭代器
    //std::insert_iterator< std::list<int> > insert_it(foo, it);
    std::insert_iterator< std::list<int> > insert_it = inserter(foo2, it2);
    //向 foo 容器中插入元素
    insert_it = 1;
    insert_it = 2;
    insert_it = 3;
    insert_it = 4;
    //输出 foo 容器存储的元素
    for (std::list<int>::iterator it2 = foo2.begin(); it2 != foo2.end(); ++it2)
        std::cout << *it2 << ' ';




    return 0;
}


