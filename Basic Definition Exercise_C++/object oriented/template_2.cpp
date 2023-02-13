// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;
template<class T>
class Student
{
    private:
        string Name;
        T Height, Weight;
    public:
        Student(string n, T h, T w)
        {
            Name = n;
            Height = h;
            Weight = w;

        }
        void Show()
        {
            cout << Name << "的身高是" << Height << "體重是" << Weight << endl;

        }
        void GetMax(T a, T b)
        {
            T max;
            if (a > b)
            {
                max = a;
            }
            else
            {
                max = b;
            }
            cout << Name << "找出" << a << ","
                << b << "之中最大數為" << max << "\n\n";
        }

   


};

int main()
{
    Student<int>jerry("傑瑞", 175, 73);
    jerry.Show();
    jerry.GetMax(5, 2);
    Student<double>david("大衛", 170.5, 65.33);
    david.Show();
    david.GetMax(5.3, 9.8);
    system("PAUSE");
    return 0;
}


