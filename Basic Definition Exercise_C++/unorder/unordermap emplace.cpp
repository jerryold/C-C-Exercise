#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    /*emplace-需要一迭代器來返回接收的值*/
    //创建 umap 容器
    unordered_map<string, string> umap;
    //定义一个接受 emplace() 方法的 pair 类型变量
    pair<unordered_map<string, string>::iterator, bool> ret;
    //调用 emplace() 方法
    ret = umap.emplace("國王", "遊戲");
    //输出 ret 中包含的 2 个元素的值
    cout << "bool =" << ret.second << endl;
    cout << "iter ->" << ret.first->first << " " << ret.first->second << endl;

    /*emplace_hint*/
   unordered_map<string, string> umap1;
   unordered_map<string, string>::iterator iter;
   iter = umap1.emplace_hint(umap1.begin(), "富邦", "勇士");
   cout << "iter->"<<iter->first << " " << iter->second << endl;
    


    return 0;
   
}


