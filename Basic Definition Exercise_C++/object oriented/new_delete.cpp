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
		Student(){
		} //預設建構式,沒有引數的建構式
		Student(string name, int score)
		{
			this->setname(name);
			this->setscore(score);
		}
		~Student() { //執行delete時會執行解構式
			cout << "學生->" << this-> getname() << "被刪除了" << endl;
		}
		void ShowStudent()
		{
			cout << "姓名" << this->getname() << "成績:" << this->getscore() << endl;
		}

};


int main()
{
	Student* ptr1, * ptr2;
	ptr1 = new Student;//使用new動態配置記憶體,此時執行預設的建構式
	ptr1->setname("Test1");
	ptr1->setscore(120);
	ptr1->ShowStudent();

	ptr2 = new Student("Test2", 80);
	ptr2->ShowStudent();
	cout << "delete ptr1";
	delete ptr1; //使用delete釋放記憶體,並執行解構式
	cout << "delete ptr2";
	delete ptr2; //使用delete釋放記憶體,並執行解構式


	
	system("PAUSE");
	
	return 0;
} 


