// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;




int main()
{
    /* advance練習*/
    
    
    vector<int> myvector{ 1,2,3,4 };
    vector<int>::iterator it = myvector.begin();
    cout << "移動前的it=" << *it << endl;

    advance(it, 2);//借助advance將it iterator前進2個位置

    cout << "移動後的it=" << *it << endl;

    it = myvector.end();//指向vector的最後一個元素
    advance(it, -3);//借助advance將it iterator後退3個位置
    cout << "後退後的it=" << *it << endl;
    
    return 0;
    

    /*prev練習*/

    /*
    list<int> mylist{ 1,2,3,4,5 };
    list<int>::iterator it = mylist.end();
    auto newit = prev(it, 2);//由於n為正數,newit位於it左側

    cout << "prev(it, 2) = " << *newit << endl;

    it = mylist.begin();
    newit = prev(it, -2);//n為負數,newit位於it右側
    cout << "prev(it, -2) = " << *newit;
    */

    /*next練習*/

    /*
    list<int> mylist{ 1,2,3,4,5 };
    list<int>::iterator it = mylist.begin();
    auto newit = next(it, 2);//由於2為正數,newit位於it右側
    cout << "next(it, 2) = " << *newit << endl;

    it = mylist.end();
    newit = next(it, -2);
    cout << "next(it, -2) = " << *newit;
    */

    
    /* distance()函數練習*/
    
    /*
    list<int>mylist; //創建一個空list
    for(int i=0;i<20;i++)
    {
        mylist.push_back(i);
    }
    list<int>::iterator first = mylist.begin();
    list<int>::iterator last = mylist.end();

    
    cout << "distance()=" << distance(first, last);
    */
    

    
}


