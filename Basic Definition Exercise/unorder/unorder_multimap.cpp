#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    //创建空容器
    std::unordered_multimap<std::string, std::string> myummap;
    //向空容器中连续添加 5 个键值对
    myummap.emplace("國王", "新北");
    myummap.emplace("富邦", "台北");
    myummap.emplace("領航員", "桃園");
    myummap.emplace("鋼鐵人", "高雄");
    myummap.emplace("工程師", "新竹");
    //输出 muummap 容器存储键值对的个数
    cout << "myummmap size = " << myummap.size() << endl;
    //利用迭代器输出容器中存储的所有键值对
    for (auto iter = myummap.begin(); iter != myummap.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }


    return 0;
   
}


