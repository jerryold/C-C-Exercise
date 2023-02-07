#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    //創建並初始化容器
    set<std::string>myset;
    myset.insert({ "國王","攻城獅","勇士"});
    for (auto iter = myset.begin(); iter != myset.end(); ++iter) {
        cout << *iter << endl;
    }
    return 0;

}

