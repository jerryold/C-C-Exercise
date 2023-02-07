#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    //創建空 umap 容器
    unordered_map<int, int> umap;
    //向 umap 容器添加50個新键值
    for (int i = 1; i <= 50; i++)
    {
        umap.emplace(i, i);
    }
    //獲取键为 49 的键值對所在的範圍
    auto pair = umap.equal_range(49);
    for (auto iter = pair.first; iter != pair.second; ++iter) {
        cout << iter->first << " ";
    }
    cout << endl;
    //手動調整最大負載因子數
    umap.max_load_factor(3.0);
    //手動調用 rehash() 函数重哈希
    umap.rehash(10);
    //重哈希之后，pair 的範圍可能會發生變化
    for (auto iter = pair.first; iter != pair.second; ++iter) {
        cout << iter->first << " ";
    }


    return 0;
   
}


