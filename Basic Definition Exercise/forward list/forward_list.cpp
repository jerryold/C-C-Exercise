// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <forward_list>
#include <iterator>

using namespace std;


int main()
{   
    
    forward_list<int> values{ 1,2,3 };
    forward_list<int> my_words{ 1,2,3,4 };
    forward_list<int> values2{ 1,2,3,4 };
    values.emplace_front(4);//{4,1,2,3}
    values.emplace_after(values.before_begin(), 5); //{5,4,1,2,3}
    values.reverse();//{3,2,1,4,5}
     for (auto it = values.begin(); it != values.end(); ++it) {
        cout << *it << " ";
     }

    int count = distance(begin(my_words), end(my_words));
    cout <<"\n" << count;
    auto it = values2.begin();
    advance(it, 2);
    cout << "\n";
    while (it != values2.end())
    {
        cout << *it << " ";
        ++it;
    }
    return 0;
    
}


