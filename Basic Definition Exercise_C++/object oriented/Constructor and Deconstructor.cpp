// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Car
{
	private:
		int _speed;
	public:
		//物件的建構式1
		Car()
		{
			_speed = 0;
			cout << "初始化的速度=" << _speed << endl;
		}
		//物件的建構式2
		Car(int vSpeed)
		{
			_speed = vSpeed;
			cout << "初始化的速度=" << _speed << endl;
		}
		//物件的解構式
		~Car()
		{
			cout << "車子物件被消滅了...." << "\n\n";
		}
};
void Dosomething()
{
	cout << "進入程序,並宣告Nisson物件....\n";
	Car Nisson(10);
	cout << "物件宣告完成,準備離開方法...\n";
	//Nisson物件是此函數的區域變數,離開此方法Nisson物件會被消滅
}

int main()
{
	Dosomething();
	cout << "宣告Nisson物件..\n";
	Car Nisson;
	cout << "Nisson物件宣告完成..\n";
	system("PAUSE");
	
	return 0;
} //Nisson是main函數的區域變數,離開main函式時會會被消滅


