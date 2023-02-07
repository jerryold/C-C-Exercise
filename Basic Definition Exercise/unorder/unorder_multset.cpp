#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main()
{
    
    
   
    //创建一个空的unordered_multiset容器
    std::unordered_multiset<std::string> umset;
    //给 uset 容器添加数据
    umset.emplace("國王新北");
    umset.emplace("富邦台北");
    umset.emplace("鋼鐵人高雄");
    umset.emplace("攻城獅新竹");
    //查看当前 umset 容器存储元素的个数
    cout << "umset size = " << umset.size() << endl;
    //遍历输出 umset 容器存储的所有元素
    for (auto iter = umset.begin(); iter != umset.end(); ++iter) {
        cout << *iter << endl;
    }
    return 0;
}


