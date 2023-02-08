#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    /*erase用法*/
    //创建 umap 容器
    unordered_map<string, string> umap{
        {"國王", "遊戲"},
        {"富邦", "保險"},
        {"鋼鐵", "英雄"} };
    //first 指向第一个键值对
    unordered_map<string, string>::iterator first = umap.begin();
    //last 指向最后一个键值对
    unordered_map<string, string>::iterator last = umap.end();
    //删除[fist,last)范围内的键值对
    auto ret = umap.erase(first, last);
    //输出 umap 容器中存储的键值对
    for (auto iter = umap.begin(); iter != umap.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }
    
    cout << " " << endl << endl;
    /*clear*/
    unordered_map<string, string> umap1{
        {"國王", "遊戲"},
        {"富邦", "保險"},
        {"鋼鐵", "英雄"} };
    //输出 umap 容器中存储的键值对
    for (auto iter = umap1.begin(); iter != umap1.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }
    //删除容器内所有键值对
    umap1.clear();
    cout << "umap size = " << umap1.size() << endl;  
    


    return 0;
   
}


