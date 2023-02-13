// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Traffic
{
	protected:
		static int _miles;
	public:
		virtual void SpeedUp() = 0;
		
	
};
int Traffic::_miles = 0;
class  Car:public Traffic
{
    public:
		void SpeedUp()
		{
			_miles += 2;
			cout << "駕駛車子,加速中,前進" << _miles << "公里" << endl;
		}
	
};

class  Plane :public Traffic
{
public:
	void SpeedUp()
	{
		_miles += 15;
		cout << "駕駛飛機,加速中,前進" << _miles << "公里" << endl;
	}

};


int main()
{
	Traffic* t;
	Car mycar;
	Plane myplane;
	int input;
	while (true)
	{
		cout << "請問要駕駛->1.車子 2.飛機 其他:離開:";
		cin >> input;
		if (input == 1)
		{
			t = &mycar;
		}
		else if (input == 2)
		{
			t = &myplane;
		}
		else
		{
			break;
		}
		t->SpeedUp();
		cout << endl;
	}
	

	
	system("PAUSE");
	
	return 0;
} 


