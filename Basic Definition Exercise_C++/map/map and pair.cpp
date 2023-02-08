#include <map> //使用 map 容器，必须引入该头文件
#include<utility> //提供创建 pair 对象的方法
#include <string>
#include <iostream>
using namespace std;
int main()
{   /*
    //创建一个空的 map 关联式容器，该容器中存储的键值对，其中键为 string 字符串，值也为 string 字符串类型
    map<string, string> mymap;
    //向 mymap 容器中添加数据
    mymap["水果"] = "蘋果";
    mymap["動物"] = "斑馬";
    mymap["食物"] = "泡麵";
    //使用 map 容器的迭代器，遍历 mymap 容器，并输出其中存储的各个键值对
    for (map<string, string>::iterator it = mymap.begin(); it != mymap.end(); ++it) {
        //输出各个元素中的键和值
        cout << it->first << " => " << it->second << '\n';
    }
    */
    

    /*pair用法:*/
    pair <string, int> pair1("pair", 10);
    pair <string, int> pair2("pair2", 20);
    //交换 pair1 和 pair2 的键值对
    pair1.swap(pair2);
    cout << "pair1: " << pair1.first << " " << pair1.second << endl;
    cout << "pair2: " << pair2.first << " " << pair2.second << endl;
    return 0;
    
}