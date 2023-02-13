// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Employee
{
	private:
		string _name;
		int _salary;
	public:
		void setname(string value)
		{
			_name = value;
		}
		string getname()
		{
			return _name;
		}
		void setSalary(int value)
		{
			if (value < 22000 || value>60000)
			{
				_salary = 22000;
			}
			else
			{
				_salary = value;
			}

		}
		int getSalary()
		{
			return _salary;
		}
		void print()
		{
			cout << getname() << "\t" << getSalary() << endl;
		}

};


int main()
{
	string name;
	int i, salary;
	Employee aryEmployee[5];
	cout << "請輸入5位員工姓名與薪資\n";
	for (i = 0; i < 5; i++)
	{
		cout << "第" << (i + 1) << "位員工姓名";
		cin >> name;
		aryEmployee[i].setname(name);
		cout << "第" << (i + 1) << "位員工薪資";
		cin >> salary;
		aryEmployee[i].setSalary(salary);

	}
	cout << "\n印出所有員工姓名與薪資\n";
	cout << "編號\t姓名\t薪資\n";
	cout << "=========================\n";
	for (i = 0; i < 5; i++)
	{
		cout << " "<<(i + 1) << "\t";
		aryEmployee[i].print();

	}
	system("PAUSE");
	
	return 0;
} 


