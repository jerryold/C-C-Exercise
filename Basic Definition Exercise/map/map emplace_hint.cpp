#include <map> //使用 map 容器，必须引入该头文件
#include<utility> //提供创建 pair 对象的方法
#include <string>
#include <iostream>
using namespace std;
int main()
{
    //创建并初始化 map 容器
    std::map<string, string>mymap;
    //指定在 map 容器插入鍵值,emplace_hint不僅傳入鍵值所需要的數據,還需要傳入一個迭代器作為參數
    map<string, string>::iterator iter = mymap.emplace_hint(mymap.begin(), "STL教程", "http://c.biancheng.net/stl/");
    cout << iter->first << " " << iter->second << endl;
    iter = mymap.emplace_hint(mymap.begin(), "C语言教程", "http://c.biancheng.net/c/");
    cout << iter->first << " " << iter->second << endl;
    //插入失败样例
    iter = mymap.emplace_hint(mymap.begin(), "STL教程", "http://c.biancheng.net/java/");
    cout << iter->first << " " << iter->second << endl;

    return 0;


   
        
}

