#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    set<string> myset;
    //空set容器不存储任何元素
    cout << "1、myset size = " << myset.size() << endl;
    myset.insert("鋼鐵人");
    myset.insert("國王");
    myset.insert("攻城師");
    cout << "2、myset size = " << myset.size() << endl;
    //利用双向迭代器，遍历myset
    for (auto iter = myset.begin(); iter != myset.end(); ++iter) {
        cout << *iter << endl;
    }
   
    return 0;
}

