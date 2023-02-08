#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    //創建並初始化容器
    set<string> myset{"鋼鐵人","攻城獅","國王","富邦"};
    set<string>::iterator iter=myset.find("國王");
    for (; iter != myset.end(); ++iter)
    {
        cout << *iter << endl;
    }
   
   
    return 0;
}

