// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Student
{
	private:
		string _name;
		int _score;
	public:
		void setname(string value)
		{
			_name = value;

		}
		string getname()
		{
			return _name;
		}
		void setscore(int value)
		{
			if (value < 0)
			{
				_score = 0;
			}
			else if (value > 100)
			{
				_score = 100;
			}
			else
			{
				_score = value;
			}
		}
		int getscore()
		{
			return _score;
		}
		void print()
		{
			cout << getname() << "\t" << getscore() << endl;
		}
		

};


int main()
{
	string name;
	int i, score, num;
	cout << "請輸入學生人數:";
	cin >> num;
	Student* ptr;
	ptr = new Student[num];
	cout << "請輸入" << num << "位學生姓名與成績:\n";
	for (i = 0; i < num; i++)
	{
		cout << "第" << (i + 1) << "位學生姓名:";
		cin >> name;
		ptr->setname(name);
		cout << "第" << (i + 1) << "位學生成績:";
		cin >> score;
		ptr->setscore(score);
		ptr++;
	}
	cout << "\n印出所有學生的姓名與成績\n";
	cout << "編號\t姓名\t成績\n";
	cout << "================\n";
	ptr -= num; //ptr指向物件陣列第一個元素地址
	for (i = 0; i < num; i++)
	{
		cout << " " << (i + 1) << "\t";
		ptr->print();
		ptr++;
	}



	
	system("PAUSE");
	
	return 0;
} 


