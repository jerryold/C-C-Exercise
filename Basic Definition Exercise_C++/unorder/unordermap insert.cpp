#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    //创建空的 umap 容器
    unordered_map<string, string> umap;
    //向 umap 容器同时添加多个键值对
    umap.insert({ {"國王","遊戲"},
    {"富邦","金控"},
    {"國泰","人壽"} });
    //遍历输出 umap 容器中存储的键值对
    for (auto iter = umap.begin(); iter != umap.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }

    return 0;
   
}


