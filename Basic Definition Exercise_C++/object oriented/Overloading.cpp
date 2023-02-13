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
		int GetSpeed()
		{
			return _speed;
		}
		void Setspeed(int value)
		{
			if (value < 0)
			{
				value = 0;
			}
			if (value > 200)
			{
				value = 200;
			}
			_speed = value;
		}
		void Accelerate() {
			this->_speed++;
		}
		void Accelerate(int addSpeed)
		{
			this->_speed += addSpeed;
		}
		void Accelerate(string S)
		{
			if (S == "STOP")
			{
				this->_speed = 0;
			}
		}

};
int main()
{
	//system("chcp 65001 && cls");
	Car Nisson;
	Nisson.Setspeed(0);
	cout << "現在速度:" << Nisson.GetSpeed() << endl;
	cout << "加速...\n";
	Nisson.Accelerate();
	cout << "現在速度:" << Nisson.GetSpeed() << endl;
	cout << "加速10...\n";
	Nisson.Accelerate(10);
	cout << "現在速度:" << Nisson.GetSpeed() << endl;
	cout << "停車....\n";
	Nisson.Accelerate("STOP");
	cout << "現在速度:" << Nisson.GetSpeed() << endl;
	system("PAUSE");
	return 0;








}


