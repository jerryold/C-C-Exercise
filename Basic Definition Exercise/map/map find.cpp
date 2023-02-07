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
      
    //查詢鍵為水果的鍵值
    /*
    auto iter = myMap.find("電腦");
    for (; iter != myMap.end(); ++iter)
    {
        cout << iter->first << " " << iter->second << endl;
    }
    */

    //找到第一個鍵的值不小於食物的鍵值
    auto iter = myMap.lower_bound("食物");
    cout << "lower:" << iter->first << "" << iter->second << endl;

    //找到第一個鍵的值不小於食物的鍵值
    iter = myMap.upper_bound("食物");
    cout << "upper:" << iter->first << "" << iter->second << endl;

    //創建一個pair對象，来接收 equal_range() 的返回值
    pair <std::map<string, string>::iterator, std::map<string, string>::iterator> myPair = myMap.equal_range("食物");
    for (auto iter = myPair.first; iter != myPair.second; ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }


    return 0;
        
}

