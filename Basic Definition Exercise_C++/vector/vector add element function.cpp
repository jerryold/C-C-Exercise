// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<vector>

using namespace std;




int main()
{   
    /*底層實現機制不同,push_back再向容器尾部添加元素時,首先會創建這個元素,然後再將這個元素拷貝或者移動到容器中;
      而emplace_back()是實現時,則是直接在容器尾部創建這個元素,省去拷貝或移動元素的過程  
    */

    /*push_back*/
    vector<int> values{};
    values.push_back(1);
    values.push_back(2);
    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << " ";
    }
    

    /*emplace_back*/
    /* 
    vector<int> values{};
    values.emplace_back(1);
    values.emplace_back(2);
    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << " ";
    }
    */

    return 0;
    
    
    

    
}


