// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;
template<class  T1, class T2>
void printarray(T1* ary, T2 ary_size)
{
    T2 i;
    for (i = 0; i < ary_size; i++)
    {
        cout << ary[i] << " ";
    }
}
template<class T1,class T2>
void sortarray(T1* ary, T2 ary_size)
{
    T2 i, j;
    T1 t;
    for (i = ary_size - 2; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (ary[j] > ary[j + 1])
            {
                t = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = t;
            }
        }
    }
}
int main()
{
    cout << "氣泡排序法\n";
    int data[] = { 51,32,6,4,99 };
    cout << "整數排序前";
    printarray(data, 5);
    cout << endl;
    sortarray(data, 5);
    cout << endl;
    printarray(data, 5);
    cout << "\n\n";

    double fdata[] = { 3.2, 7.3 , 11.32, 0.55, 98.3, 1.99 };
    cout << "浮點數排序前";
    printarray(fdata, 6);
    cout << endl;
    sortarray(fdata, 6);
    cout << "整數排序後";
    printarray(fdata, 6);
    cout << "\n\n";

    string sdata[] = { "peter","tom","david","jerry" };
    cout << "字串排序前";
    printarray(sdata, 4);
    cout << endl;
    sortarray(sdata, 4);
    cout << "字串排序後";
    printarray(sdata, 4);
    printf("\n\n");
    system("PAUSE");
    return 0;
}


