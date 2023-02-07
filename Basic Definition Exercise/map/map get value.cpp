#include <map> //使用 map 容器，必须引入该头文件
#include<utility> //提供创建 pair 对象的方法
#include <string>
#include <iostream>
using namespace std;
int main()
{
    //創建並初始化一個map容器
    map<string, string>myMap{{ "Kao","Jerry" },
                            { "Lebron","James" },
                            { "Kevin","Jasmine" }
                        };
    string cValue = myMap["Lebron"];
    cout << cValue << endl;
    
    cout << myMap.at("Kao") << endl;

    map< std::string, std::string >::iterator myIter = myMap.find("Kevin");
    cout << myIter->first << " " << myIter->second << endl;

    for (auto iter = myMap.begin(); iter != myMap.end(); ++iter) {
        //调用 string 类的 compare() 方法，找到一个键和指定字符串相同的键值对
        if (!iter->first.compare("Kevin")) {
            cout << iter->first << " " << iter->second << endl;
        }
    }

    return 0;


   
        
}

