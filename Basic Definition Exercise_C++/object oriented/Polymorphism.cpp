// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Employee
{
	protected:
		int _salary; //宣告Protected保護層級,可在子類別使用
	public:
		int GetSalay()
		{
			return _salary;
		}
		void SetSalary(int value)
		{
			if ((value >= 20000) & (value <= 40000))
			{
				_salary = value;
			}
			else
			{
				_salary = 20000;
			}
		}
		void ShowTotal()
		{
			cout << "底薪" << GetSalay() << endl;
		}		
};

class Manager :public Employee
{
	public:
		int Bonus;
		int GetSalary()
		{
			return _salary; //使用父類別的salary
		}
		void SetSalary(int value)
		{
			if ((_salary >= 30000) && (value <= 100000))
			{
				_salary = value;
			}
			else
			{
				_salary = 30000;
			}
		}
		void ShowTotal()//覆寫Employeee的ShowTotal方法
		{
			Employee::ShowTotal(); //呼叫父類別Employee的ShowTotal方法
			cout << "薪水+獎金" << (Bonus + GetSalary()) << endl;
		}


};

int main()
{
	Employee Tom;
	Tom.SetSalary(40000);
	cout << "Tom員工薪水" << Tom.GetSalay() << endl;
	Tom.ShowTotal();
	cout << "===================\n\n";
	Manager Jerry;
	Jerry.SetSalary(90000);
	cout << "Jerry薪水" << Jerry.GetSalary() << endl;
	Jerry.Bonus = 70000;
	cout << "Jerry獎金" << Jerry.Bonus << endl;
	Jerry.ShowTotal();
	

	
	system("PAUSE");
	
	return 0;
} 


