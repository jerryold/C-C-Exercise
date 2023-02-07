#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    /*emplace*/
    //創建並初始化容器
    std::set<string>myset;
    pair<set<string, string>::iterator, bool>result = myset.emplace("國王");
    cout << "myset size = " << myset.size() << endl;
    cout << "result.iter = <" << *(result.first) << ", " << result.second << ">" << endl;
    
    cout << " " << endl;
    /*emplace_hint*/
    std::set<string>myset2;
    set<string>::iterator iter = myset2.emplace_hint(myset2.begin(), "勇士");
    cout << "myset2 size = " << myset2.size() << endl;
    cout << *iter << endl;

    return 0;
}


