#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main() {
    //创建并初始化一个 vector 容器
    std::vector<int> myvector{ 1,2,3,4,5,6,7,8 };
    //创建并初始化一个反向迭代器
    std::reverse_iterator<std::vector<int>::iterator> my_reiter(myvector.rbegin());//指向 8
    cout << *my_reiter << endl;// 8
    cout << *(my_reiter + 3) << endl;// 5
    cout << *(++my_reiter) << endl;// 7
    cout << my_reiter[4] << endl;// 3
    return 0;
}


