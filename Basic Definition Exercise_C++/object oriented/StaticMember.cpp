// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Student
{
	public:
		int No;
		static int Total;
		string Name;
		static void ShowTotalStudents()//靜態宣告函式
		{
			cout << "現在共有" << Total << "幾位學生" << endl;
		}
		void Showme()
		{
			cout << this->Name << "是第" << No << "位學生" << endl;
		}
		Student(string vStudentname) { //建構式
			Total += 1;
			No = Total;
			Name = vStudentname;
		
		
		}
		~Student()  //解構式
		{  
			Total -= 1;
		}


		
		

};

int Student::Total = 0;// Student 類別靜態資料成員學員總數為0

int main()
{
	Student::ShowTotalStudents();
	Student Jack("Jack");
	Jack.Showme();
	Student Jerry("Jerry");
	Jerry.Showme();
	Student Alice("Alice");
	Alice.Showme();
	Student::ShowTotalStudents();
	Student* MyStudent;
	MyStudent = &Jerry;
	MyStudent->Showme();
	Student::ShowTotalStudents();
	

	
	system("PAUSE");
	
	return 0;
} 


