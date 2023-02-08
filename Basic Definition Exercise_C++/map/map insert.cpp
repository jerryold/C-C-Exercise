#include <map> //使用 map 容器，必须引入该头文件
#include<utility> //提供创建 pair 对象的方法
#include <string>
#include <iostream>
using namespace std;
int main()
{   
    //创建空 map 容器，默认根据个键值对中键的值，对键值对做降序排序
    std::map<std::string, std::string, std::greater<std::string>>myMap;

    myMap.emplace("水果", "香蕉");
    myMap.emplace("電腦", "華碩");
    myMap.emplace("食物", "蔬菜");
    //輸出當前myMap容器的個數
    cout << "myMap size==" << myMap.size() << endl;
   
    //判斷當前myMap是否為空
    if (!myMap.empty())
    {
        for (auto i = myMap.begin(); i != myMap.end(); ++i)
        {
            cout << i->first << " " << i->second << endl;
        }
    }

    return 0;
        
}

